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

CY_ISR(isr_1)
{
    //Pin_STEP_Write(~Pin_STEP_Read());
    X_Counter_ClearInterrupt(X_Counter_INTR_MASK_TC);
}


int main()
{
    CyGlobalIntEnable;
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
        
    
    }
}
    


/* [] END OF FILE */
