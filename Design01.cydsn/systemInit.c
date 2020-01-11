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
#include <systemInit.h>
//#include <DIR_INPUT.h>
#include <PWM_1.h>
#include <PWM_2.h>
//#include <PWM1_Sine.h>
//#include <PWM2_Sine.h>

/* [] END OF FILE */
void systemInit (){
    currentStepA = 0;
    currentStepB = 16;
    divider = 16;
    previousDivider = 16;
    FullScale = 16;
    step = 1;
    pwmA = sineTable[0];
    pwmB = sineTable[FullScale];
    if (dirReg == 0 ){
        phase = 0;
    }
    else{
        phase = 2;
    }
    
    PWM_1_WriteCompare(pwmA);
    PWM_2_WriteCompare(pwmB);
    Clock_PWM_Start(); 
    //PWM_Sine_Start();
	PWM_1_Start();
	PWM_2_Start();
	PWM_1_TriggerCommand (PWM_1_MASK, PWM_1_CMD_START);
	PWM_2_TriggerCommand (PWM_2_MASK, PWM_2_CMD_START);	
	//PWM2_Sine_Start();
}