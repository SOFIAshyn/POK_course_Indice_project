/*******************************************************************************
* File Name: Counter_Motor_Steps_PM.c
* Version 2.10
*
* Description:
*  This file contains the setup, control, and status commands to support
*  the component operations in the low power mode.
*
* Note:
*  None
*
********************************************************************************
* Copyright 2013-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "Counter_Motor_Steps.h"

static Counter_Motor_Steps_BACKUP_STRUCT Counter_Motor_Steps_backup;


/*******************************************************************************
* Function Name: Counter_Motor_Steps_SaveConfig
********************************************************************************
*
* Summary:
*  All configuration registers are retention. Nothing to save here.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void Counter_Motor_Steps_SaveConfig(void)
{

}


/*******************************************************************************
* Function Name: Counter_Motor_Steps_Sleep
********************************************************************************
*
* Summary:
*  Stops the component operation and saves the user configuration.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void Counter_Motor_Steps_Sleep(void)
{
    if(0u != (Counter_Motor_Steps_BLOCK_CONTROL_REG & Counter_Motor_Steps_MASK))
    {
        Counter_Motor_Steps_backup.enableState = 1u;
    }
    else
    {
        Counter_Motor_Steps_backup.enableState = 0u;
    }

    Counter_Motor_Steps_Stop();
    Counter_Motor_Steps_SaveConfig();
}


/*******************************************************************************
* Function Name: Counter_Motor_Steps_RestoreConfig
********************************************************************************
*
* Summary:
*  All configuration registers are retention. Nothing to restore here.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void Counter_Motor_Steps_RestoreConfig(void)
{

}


/*******************************************************************************
* Function Name: Counter_Motor_Steps_Wakeup
********************************************************************************
*
* Summary:
*  Restores the user configuration and restores the enable state.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void Counter_Motor_Steps_Wakeup(void)
{
    Counter_Motor_Steps_RestoreConfig();

    if(0u != Counter_Motor_Steps_backup.enableState)
    {
        Counter_Motor_Steps_Enable();
    }
}


/* [] END OF FILE */
