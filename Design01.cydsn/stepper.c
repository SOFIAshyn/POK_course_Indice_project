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
<<<<<<< HEAD

CY_ISR(isr_1)
{
    //Pin_STEP_Write(~Pin_STEP_Read());
    Step_Counter_ClearInterrupt(Step_Counter_INTR_MASK_TC);
}

=======
>>>>>>> 2a53f4dd5b08b7201acfd3c35e4b74087265cf45
CY_ISR(X_MoveISR)
{
    xStepsRemaining--;

    if ((xStepsRemaining) == 0) 
    {
<<<<<<< HEAD
        Step_Counter_Stop();
        CyDelayUs(5);
        Step_Counter_Init();
=======
        X_Counter_Stop();
        CyDelayUs(5);
        X_Counter_Init();
>>>>>>> 2a53f4dd5b08b7201acfd3c35e4b74087265cf45
        Stepper_xMotorState = X_MOTOR_READY;
    }    

    // очистити апаратне переривання - розблокувати на наступний раз
   // X_Counter_ReadStatusRegister();
    
    if (xStepsRemaining <= accelLimit) // тормозимося
    {
<<<<<<< HEAD
        Step_Counter_WritePeriod(acceleration[xStepsRemaining-1]);
    }
    else if (xStepsExecuted <= accelMaxIndex) // розганяємося
    {
        Step_Counter_WritePeriod(acceleration[xStepsExecuted]);
    }
    else // повна швидкість
    {
        Step_Counter_WritePeriod(FULL_SPEED_PERIOD);
    }

    xStepsExecuted++;    
    Step_Counter_ClearInterrupt(Step_Counter_INTR_MASK_TC);
=======
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
>>>>>>> 2a53f4dd5b08b7201acfd3c35e4b74087265cf45
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
        
<<<<<<< HEAD
=======
        //зберегти індекс половинної швидкості
        if ((t > (ACCELERATION_TIME / 2.0)) && (accelHalfSpeedIndex == 0)) 
            accelHalfSpeedIndex = i;        
>>>>>>> 2a53f4dd5b08b7201acfd3c35e4b74087265cf45
        
        // вийти з циклу якщо вже досягнуто ліміту прискорення 
        if (t > ACCELERATION_TIME) break; 
   }
    
   return (t > ACCELERATION_TIME); // повертаємо істину якщо масив розгону влізся в память    
}

bool Stepper_Init(void)
{
<<<<<<< HEAD
  Step_Counter_Init();
  X_Interrupt_StartEx(X_MoveISR);
=======
  X_Counter_Init();
  X_Interrupt_Start();

>>>>>>> 2a53f4dd5b08b7201acfd3c35e4b74087265cf45

  return FillAccelerationArray();
}

<<<<<<< HEAD
void Stepper_MoveX(bool nonBlocking, MOTOR_ENUM motor ,X_DIRECTION_ENUM direction, uint32_t steps)
=======
void Stepper_MoveX(bool nonBlocking, X_DIRECTION_ENUM direction, uint32_t steps)
>>>>>>> 2a53f4dd5b08b7201acfd3c35e4b74087265cf45
{
    xStepsExecuted = 0;
    xStepsRemaining = steps; 
    Stepper_xMotorState = X_MOTOR_MOVE;
    accelLimit = steps/2;
<<<<<<< HEAD
    
    Step_Counter_Enable();
    Motor_Control_Reg_Write(motor);
    
=======
>>>>>>> 2a53f4dd5b08b7201acfd3c35e4b74087265cf45
    if (accelLimit > accelMaxIndex)
    {
        accelLimit = accelMaxIndex;
    }    

<<<<<<< HEAD
    Step_Counter_WritePeriod(LOW_SPEED_PERIOD);    
    Pin_DIR_X_Write(direction);
    Pin_DIR_Y_Write(direction);
    Step_Counter_Start();
=======
    X_Counter_WritePeriod(LOW_SPEED_PERIOD);    
    Pin_DIR_Write(1);
    X_Interrupt_SetVector(X_MoveISR);
    X_Counter_Start();
>>>>>>> 2a53f4dd5b08b7201acfd3c35e4b74087265cf45
    
    //якщо функція блокуюча - чекаємо поки двигун виконає всі кроки
    if (!nonBlocking) 
    {
        while (Stepper_xMotorState < X_MOTOR_READY); 
    }    
}

void Stepper_StopX(void)
{
<<<<<<< HEAD
    Step_Counter_Stop();
=======
    X_Counter_Stop();
>>>>>>> 2a53f4dd5b08b7201acfd3c35e4b74087265cf45
    Stepper_xMotorState = X_MOTOR_READY;
}


