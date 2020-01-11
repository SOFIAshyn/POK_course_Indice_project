/******************************************************************************
 *
 * Модуль управління кроковими двигунами
 *
 ******************************************************************************/
#ifndef _STEPPER_H_
#define _STEPPER_H_

#include <stdint.h>
#include <stdbool.h>
#include <math.h>    
    
#define ERR_X_MOTOR_ORIGIN_NOT_FOUND    (0xEFu)
    
/******* ВИЗНАЧЕННЯ ТИПІВ *****************************************************/
typedef enum {
    DIR_CNTCLCKWISE = 0,
    DIR_CLOCKWISE
} X_DIRECTION_ENUM;

<<<<<<< HEAD
typedef enum{
    MOTOR_1 = 0,
    MOTOR_2
} MOTOR_ENUM;

typedef enum {
    DIR_DOWN = 0,
    DIR_UP
} Y_DIRECTION_ENUM;
=======
>>>>>>> 2a53f4dd5b08b7201acfd3c35e4b74087265cf45

typedef enum {
    X_MOTOR_ORIGIN_COARSE,
    X_MOTOR_ORIGIN_COARSE_BREAK,
    X_MOTOR_ORIGIN_COARSE_RETURN,
    X_MOTOR_ORIGIN_FINE,
    X_MOTOR_ORIGIN_FINE_COLLECT,
    X_MOTOR_ORIGIN_POSITIONING,
    
    X_MOTOR_MOVE,
    X_MOTOR_SPIRAL_SCAN,
    X_MOTOR_ACCEL_SCAN,

    X_MOTOR_READY,
    
    X_MOTOR_ORIGIN_NOT_FOUND = ERR_X_MOTOR_ORIGIN_NOT_FOUND
} X_MOTOR_STATE_ENUM;

<<<<<<< HEAD
typedef enum {
    Y_MOTOR_MOVE,
    Y_MOTOR_READY
} Y_MOTOR_STATE_ENUM;
    
/******* ВИЗНАЧЕННЯ ГЛОБАЛЬНИХ КОНСТАНТ **************************************/

#define ACCEL_ARRAY_SIZE    (1500u)     // елементів масиву розгону

#define TIMER_FREQUENCY     (12000000.0)  // Гц


#define X_IMPULSES_PER_REV  (200u)                   // кількість імпульсів на оборот двигуна
#define X_MICROSTEP         (32u)


#define FULL_ROUND_TIME     (0.25)                     // час повного обороту двигуна
#define ACCELERATION_TIME   (0.1)                     // час прискорення в секундах


// кількість імпульсів на повний оберт двигуна
#define X_IMPULSES_ROUND    (X_MICROSTEP * X_IMPULSES_PER_REV) 
=======

/******* ВИЗНАЧЕННЯ ГЛОБАЛЬНИХ КОНСТАНТ **************************************/

#define ACCEL_ARRAY_SIZE    (6270u)     // елементів масиву розгону

#define TIMER_FREQUENCY     (6000000.0)  // Гц

#define X_BIG_GEAR_TEETH    (360u)                    // кількість зубів великої шестерні
#define X_SMALL_GEAR_TETH   (20u)                     // кількість зубів малої шестерні
#define X_IMPULSES_PER_REV  (200u)                   // кількість імпульсів на оборот двигуна

#define FULL_ROUND_TIME     (1.0)                     // час повного обороту платформи (на повній швидкості)
#define ACCELERATION_TIME   (1)                     // час прискорення в секундах

#define ATTEMPS_TO_FIND_ZERO (4)                      // кількість спроб знайти центр датчика

// кількість імпульсів на повний оберт платформи
#define X_IMPULSES_ROUND    ((X_BIG_GEAR_TEETH / X_SMALL_GEAR_TETH) * X_IMPULSES_PER_REV) 
#define X_IMPULSES_TEETH    (X_IMPULSES_PER_REV / X_SMALL_GEAR_TETH)
>>>>>>> 2a53f4dd5b08b7201acfd3c35e4b74087265cf45


#define FULL_SPEED          ((float)X_IMPULSES_ROUND / (float)FULL_ROUND_TIME)  // максимальна швидкість
#define ACCELERATION        (FULL_SPEED / ACCELERATION_TIME) // прискорення
#define LOW_SPEED           (sqrt(ACCELERATION))

#define FULL_SPEED_PERIOD   ((uint32_t)(TIMER_FREQUENCY/FULL_SPEED))
#define HALF_SPEED_PERIOD   ((uint32_t)((2*TIMER_FREQUENCY)/FULL_SPEED))
#define LOW_SPEED_PERIOD    ((uint32_t)(TIMER_FREQUENCY/LOW_SPEED))

#define NON_BLOCKING_CALL   (true)
#define BLOCKING_CALL       (false)

/******* ГЛОБАЛЬНІ ЗМІННІ ****************************************************/

// залишок кроків котрі потрібно зробити по обох осях
extern volatile uint32_t xStepsRemaining; 

// виконано кроків по обох осях
extern volatile uint32_t xStepsExecuted; 
extern volatile uint32_t xStepsExecutedSpiral; 
<<<<<<< HEAD
=======

>>>>>>> 2a53f4dd5b08b7201acfd3c35e4b74087265cf45
// поточний стан моторів
extern volatile X_MOTOR_STATE_ENUM Stepper_xMotorState;

/******* ВИЗНАЧЕННЯ ГЛОБАЛЬНИХ ФУНКЦІЙ ***************************************/

// Ініціалізувати підсистему
bool Stepper_Init(void);

<<<<<<< HEAD
void Stepper_MoveX(bool nonBlocking, MOTOR_ENUM motor ,X_DIRECTION_ENUM direction, uint32_t steps);
=======
void Stepper_MoveX(bool nonBlocking, X_DIRECTION_ENUM direction, uint32_t steps);
>>>>>>> 2a53f4dd5b08b7201acfd3c35e4b74087265cf45
void Stepper_StopX(void);

#endif /* _STEPPER_H_ */
