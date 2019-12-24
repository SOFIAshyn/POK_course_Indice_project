#include <project.h>

#define LED_ON 0u
#define LED_OFF 1u


int main(void)
{
	CyGlobalIntEnable; 
    
    CapSense_Start();
    
    EZI2C_Start();
    
    /* Set up I2C communication data buffer with CapSense data structure to be 
       exposed to I2C master on a primary slave address request */
    EZI2C_EzI2CSetBuffer1(sizeof(CapSense_dsRam), sizeof(CapSense_dsRam),(uint8 *)&CapSense_dsRam);
    
    CapSense_ScanAllWidgets();
    
    for(;;)
    {
        if(CapSense_NOT_BUSY == CapSense_IsBusy())
        {
            CapSense_ProcessAllWidgets();
            
            
            // TEST
            LED11_Write(CapSense_IsWidgetActive(CapSense_BUTTON0_WDGT_ID) ? LED_ON : LED_OFF);
            LED11_Write(CapSense_IsWidgetActive(CapSense_BUTTON1_WDGT_ID) ? LED_ON : LED_OFF);
            LED11_Write(CapSense_IsWidgetActive(CapSense_BUTTON2_WDGT_ID) ? LED_ON : LED_OFF);
            LED11_Write(CapSense_IsWidgetActive(CapSense_BUTTON3_WDGT_ID) ? LED_ON : LED_OFF);
            LED11_Write(CapSense_IsWidgetActive(CapSense_BUTTON4_WDGT_ID) ? LED_ON : LED_OFF);
            LED11_Write(CapSense_IsWidgetActive(CapSense_BUTTON5_WDGT_ID) ? LED_ON : LED_OFF);
            LED11_Write(CapSense_IsWidgetActive(CapSense_BUTTON6_WDGT_ID) ? LED_ON : LED_OFF);
            LED11_Write(CapSense_IsWidgetActive(CapSense_BUTTON7_WDGT_ID) ? LED_ON : LED_OFF);
            LED11_Write(CapSense_IsWidgetActive(CapSense_BUTTON8_WDGT_ID) ? LED_ON : LED_OFF);
            LED11_Write(CapSense_IsWidgetActive(CapSense_BUTTON9_WDGT_ID) ? LED_ON : LED_OFF);
            LED11_Write(CapSense_IsWidgetActive(CapSense_BUTTON10_WDGT_ID) ? LED_ON : LED_OFF);
            LED11_Write(CapSense_IsWidgetActive(CapSense_BUTTON11_WDGT_ID) ? LED_ON : LED_OFF);
            LED11_Write(CapSense_IsWidgetActive(CapSense_BUTTON12_WDGT_ID) ? LED_ON : LED_OFF);
            LED11_Write(CapSense_IsWidgetActive(CapSense_BUTTON13_WDGT_ID) ? LED_ON : LED_OFF);
            LED11_Write(CapSense_IsWidgetActive(CapSense_BUTTON14_WDGT_ID) ? LED_ON : LED_OFF);
            
            // Abstract code (functions Change_X_Y() - in other parts of code)
            /*
            Change_1_2(CapSense_IsWidgetActive(CapSense_BUTTON0_WDGT_ID));
            Change_3_4(CapSense_IsWidgetActive(CapSense_BUTTON1_WDGT_ID));
            Change_5_6(CapSense_IsWidgetActive(CapSense_BUTTON2_WDGT_ID));
            Change_7_8(CapSense_IsWidgetActive(CapSense_BUTTON3_WDGT_ID));
            Change_9_10(CapSense_IsWidgetActive(CapSense_BUTTON4_WDGT_ID));
            Change_11_12(CapSense_IsWidgetActive(CapSense_BUTTON5_WDGT_ID));
            Change_13_14(CapSense_IsWidgetActive(CapSense_BUTTON6_WDGT_ID));
            Change_15_16(CapSense_IsWidgetActive(CapSense_BUTTON7_WDGT_ID));
            Change_17_18(CapSense_IsWidgetActive(CapSense_BUTTON8_WDGT_ID));
            Change_19_20(CapSense_IsWidgetActive(CapSense_BUTTON9_WDGT_ID));
            Change_21_22(CapSense_IsWidgetActive(CapSense_BUTTON10_WDGT_ID));
            Change_23_24(CapSense_IsWidgetActive(CapSense_BUTTON11_WDGT_ID));
            Change_25_26(CapSense_IsWidgetActive(CapSense_BUTTON12_WDGT_ID));
            Change_27_28(CapSense_IsWidgetActive(CapSense_BUTTON13_WDGT_ID));
            Change_29_30(CapSense_IsWidgetActive(CapSense_BUTTON14_WDGT_ID));
            */                      
            
            CapSense_RunTuner();

            CapSense_ScanAllWidgets();
        }
    }
}

