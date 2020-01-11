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
}


int main()
{
    CyGlobalIntEnable;
    
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
        
    
    }
}
    


/* [] END OF FILE */
