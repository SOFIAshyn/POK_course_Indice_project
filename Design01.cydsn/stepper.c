/******************************************************************************
 *
 * Модуль управління кроковими двигунами
 *
 *****************************************************************************/
#include "stepper.h"
#include <project.h>
#include <math.h>

/******* ВИЗНАЧЕННЯ ГЛОБАЛЬНИХ ЗМІННИХ****************************************/

// залишок кроків котрі потрібно зробити по обох осях
volatile uint32_t xStepsRemaining;

volatile uint16_t xStepsExecuted16; 

// виконано кроків по обох осях
volatile uint32_t xStepsExecuted;
volatile uint32_t xStepsExecutedSpiral;

// поточний стан моторів
volatile X_MOTOR_STATE_ENUM Stepper_xMotorState;

/******* ЛОКАЛЬНІ ЗМІННІ *****************************************************/

// масив періодів таймера для плавного розгону крокового двигуна
static uint32_t acceleration[ACCEL_ARRAY_SIZE]; 

//останній діючий індекс масиву розгону, відповідає максимальній швидкості
static uint32_t accelMaxIndex = 0; 
static uint32_t accelHalfSpeedIndex = 0;

static uint32_t spiralRotations;
static uint32_t slopeBeginTarget;
static uint32_t slopeEndTarget;

// змінні для пошуку центра датчика 0-азимуту
static volatile uint32_t attempToFindZero = 0;
static volatile uint32 stepsAfterZero = 0;

static uint32_t accelLimit;

/******* ОБРОБНИКИ ПЕРЕРИВАНЬ ************************************************/

// обробник для руху по осі Х
CY_ISR(X_MoveISR)
{
    xStepsRemaining--;

    if ((xStepsRemaining) == 0) 
    {
        X_Counter_Stop();
        CyDelayUs(5);
        X_Counter_Init();
        Stepper_xMotorState = X_MOTOR_READY;
    }    

    // очистити апаратне переривання - розблокувати на наступний раз
   // X_Counter_ReadStatusRegister();
    
    if (xStepsRemaining <= accelLimit) // тормозимося
    {
        X_Counter_WritePeriod(acceleration[xStepsRemaining-1]);
    }
    else if (xStepsExecuted <= accelMaxIndex) // розганяємося
    {
        X_Counter_WritePeriod(acceleration[xStepsExecuted]);
    }
    else // повна швидкість
    {
        X_Counter_WritePeriod(FULL_SPEED_PERIOD);
    }

    xStepsExecuted++;    
}




/******* ІМПЛЕМЕНТАЦІЯ ГЛОБАЛЬНИХ ФУНКЦІЙ ***************************************/

static bool FillAccelerationArray()
{
    
   float T0 = 1.0/LOW_SPEED; // початковий період, сек 
   float t = 0.0;           // біжучий час
   float t_imp;             // поточний імпульс 

   accelHalfSpeedIndex = 0;
    
   for (uint32_t i = 0; i < ACCEL_ARRAY_SIZE; i++)
   {
        t_imp = T0 / (1.0 + T0 * t * ACCELERATION);
        t += t_imp;
        t_imp *= TIMER_FREQUENCY;
        acceleration[i] = t_imp;
        accelMaxIndex = i;
        
        //зберегти індекс половинної швидкості
        if ((t > (ACCELERATION_TIME / 2.0)) && (accelHalfSpeedIndex == 0)) 
            accelHalfSpeedIndex = i;        
        
        // вийти з циклу якщо вже досягнуто ліміту прискорення 
        if (t > ACCELERATION_TIME) break; 
   }
    
   return (t > ACCELERATION_TIME); // повертаємо істину якщо масив розгону влізся в память    
}

bool Stepper_Init(void)
{
  X_Counter_Init();
  X_Interrupt_Start();


  return FillAccelerationArray();
}

void Stepper_MoveX(bool nonBlocking, X_DIRECTION_ENUM direction, uint32_t steps)
{
    xStepsExecuted = 0;
    xStepsRemaining = steps; 
    Stepper_xMotorState = X_MOTOR_MOVE;
    accelLimit = steps/2;
    if (accelLimit > accelMaxIndex)
    {
        accelLimit = accelMaxIndex;
    }    

    X_Counter_WritePeriod(LOW_SPEED_PERIOD);    
    Pin_DIR_Write(1);
    X_Interrupt_SetVector(X_MoveISR);
    X_Counter_Start();
    
    //якщо функція блокуюча - чекаємо поки двигун виконає всі кроки
    if (!nonBlocking) 
    {
        while (Stepper_xMotorState < X_MOTOR_READY); 
    }    
}

void Stepper_StopX(void)
{
    X_Counter_Stop();
    Stepper_xMotorState = X_MOTOR_READY;
}


