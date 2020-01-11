/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
<<<<<<< HEAD
#include "string.h"
#include "stepper.h"


void move(uint8 motor, uint8 dir, uint16 steps)
{
    Step_Counter_Enable();
       Motor_Control_Reg_Write(motor);
       Pin_DIR_X_Write(dir);
       Pin_DIR_Y_Write(dir);
       Counter_Motor_Steps_WriteCounter(0); 
       Step_Counter_Enable();
       while (Counter_Motor_Steps_ReadCounter() < steps)
        {
            
        }
        Step_Counter_Stop();
=======

CY_ISR(isr_1)
{
    //Pin_STEP_Write(~Pin_STEP_Read());
    X_Counter_ClearInterrupt(X_Counter_INTR_MASK_TC);
>>>>>>> 2a53f4dd5b08b7201acfd3c35e4b74087265cf45
}


int main()
{
    CyGlobalIntEnable;
<<<<<<< HEAD
    
    LCD_Start();    
    Pin_EN_Write(0);
    uint8 arr_dir[10] = {0, 0, 1, 0, 1, 0, 1, 1, 0, 1};
    uint16 arr_steps[10] = {6400, 800, 6400, 100, 5500, 1111, 333, 567, 3200, 6400};
    uint8 i = 0;
    char str[10] = {'D','e','m','o',' ', 'T', 'e', 's', 't', '!'};
    LCD_ClearDisplay();
    if (!Stepper_Init()) 
    {
        LCD_PutChar('s');
        while (1){}
    }  
    
    Counter_Motor_Steps_Start();
    
    
    
    
    
    for(;;)
    {
        char s = str[i];
        LCD_Position(0u, i);
        Stepper_MoveX(false, MOTOR_1, DIR_CLOCKWISE, arr_steps[i]);
        CyDelay(100);
        
        LCD_PutChar(s);
        Stepper_MoveX(false, MOTOR_2, DIR_CLOCKWISE, arr_steps[i]);
        CyDelay(100);
        i++;
        
        if (i == 10){
            i = 0;
            LCD_ClearDisplay();
        }
=======
    X_Interrupt_StartEx(isr_1);
    Pin_EN_Write(0);
    
    Step_Counter_Init();
    Counter_Motor_Steps_Start();
    for(;;)
    {
       Motor_Control_Reg_Write(1);
       Pin_DIR_X_Write(0);
       Pin_DIR_Y_Write(0);
       Counter_Motor_Steps_WriteCounter(0); 
       Step_Counter_Enable();
       while (Counter_Motor_Steps_ReadCounter() < 1000)
        {
            CyDelay(1);
        }
        Step_Counter_Stop();
        CyDelay(500);
        
        Motor_Control_Reg_Write(0);
        
        
       Pin_DIR_X_Write(1);
       Pin_DIR_Y_Write(1);
       Counter_Motor_Steps_WriteCounter(0); 
       Step_Counter_Enable();
       while (Counter_Motor_Steps_ReadCounter() < 1000)
        {
            CyDelay(1);
        }
        Step_Counter_Stop();
        CyDelay(500);
>>>>>>> 2a53f4dd5b08b7201acfd3c35e4b74087265cf45
        
    
    }
}
    


/* [] END OF FILE */
