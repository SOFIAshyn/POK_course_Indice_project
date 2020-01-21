/***************************************************************************//**
* \file UART_INPUT_PM.c
* \version 4.0
*
* \brief
*  This file provides the source code to the Power Management support for
*  the SCB Component.
*
* Note:
*
********************************************************************************
* \copyright
* Copyright 2013-2017, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "UART_INPUT.h"
#include "UART_INPUT_PVT.h"

#if(UART_INPUT_SCB_MODE_I2C_INC)
    #include "UART_INPUT_I2C_PVT.h"
#endif /* (UART_INPUT_SCB_MODE_I2C_INC) */

#if(UART_INPUT_SCB_MODE_EZI2C_INC)
    #include "UART_INPUT_EZI2C_PVT.h"
#endif /* (UART_INPUT_SCB_MODE_EZI2C_INC) */

#if(UART_INPUT_SCB_MODE_SPI_INC || UART_INPUT_SCB_MODE_UART_INC)
    #include "UART_INPUT_SPI_UART_PVT.h"
#endif /* (UART_INPUT_SCB_MODE_SPI_INC || UART_INPUT_SCB_MODE_UART_INC) */


/***************************************
*   Backup Structure declaration
***************************************/

#if(UART_INPUT_SCB_MODE_UNCONFIG_CONST_CFG || \
   (UART_INPUT_SCB_MODE_I2C_CONST_CFG   && (!UART_INPUT_I2C_WAKE_ENABLE_CONST))   || \
   (UART_INPUT_SCB_MODE_EZI2C_CONST_CFG && (!UART_INPUT_EZI2C_WAKE_ENABLE_CONST)) || \
   (UART_INPUT_SCB_MODE_SPI_CONST_CFG   && (!UART_INPUT_SPI_WAKE_ENABLE_CONST))   || \
   (UART_INPUT_SCB_MODE_UART_CONST_CFG  && (!UART_INPUT_UART_WAKE_ENABLE_CONST)))

    UART_INPUT_BACKUP_STRUCT UART_INPUT_backup =
    {
        0u, /* enableState */
    };
#endif


/*******************************************************************************
* Function Name: UART_INPUT_Sleep
****************************************************************************//**
*
*  Prepares the UART_INPUT component to enter Deep Sleep.
*  The “Enable wakeup from Deep Sleep Mode” selection has an influence on this 
*  function implementation:
*  - Checked: configures the component to be wakeup source from Deep Sleep.
*  - Unchecked: stores the current component state (enabled or disabled) and 
*    disables the component. See SCB_Stop() function for details about component 
*    disabling.
*
*  Call the UART_INPUT_Sleep() function before calling the 
*  CyPmSysDeepSleep() function. 
*  Refer to the PSoC Creator System Reference Guide for more information about 
*  power management functions and Low power section of this document for the 
*  selected mode.
*
*  This function should not be called before entering Sleep.
*
*******************************************************************************/
void UART_INPUT_Sleep(void)
{
#if(UART_INPUT_SCB_MODE_UNCONFIG_CONST_CFG)

    if(UART_INPUT_SCB_WAKE_ENABLE_CHECK)
    {
        if(UART_INPUT_SCB_MODE_I2C_RUNTM_CFG)
        {
            UART_INPUT_I2CSaveConfig();
        }
        else if(UART_INPUT_SCB_MODE_EZI2C_RUNTM_CFG)
        {
            UART_INPUT_EzI2CSaveConfig();
        }
    #if(!UART_INPUT_CY_SCBIP_V1)
        else if(UART_INPUT_SCB_MODE_SPI_RUNTM_CFG)
        {
            UART_INPUT_SpiSaveConfig();
        }
        else if(UART_INPUT_SCB_MODE_UART_RUNTM_CFG)
        {
            UART_INPUT_UartSaveConfig();
        }
    #endif /* (!UART_INPUT_CY_SCBIP_V1) */
        else
        {
            /* Unknown mode */
        }
    }
    else
    {
        UART_INPUT_backup.enableState = (uint8) UART_INPUT_GET_CTRL_ENABLED;

        if(0u != UART_INPUT_backup.enableState)
        {
            UART_INPUT_Stop();
        }
    }

#else

    #if (UART_INPUT_SCB_MODE_I2C_CONST_CFG && UART_INPUT_I2C_WAKE_ENABLE_CONST)
        UART_INPUT_I2CSaveConfig();

    #elif (UART_INPUT_SCB_MODE_EZI2C_CONST_CFG && UART_INPUT_EZI2C_WAKE_ENABLE_CONST)
        UART_INPUT_EzI2CSaveConfig();

    #elif (UART_INPUT_SCB_MODE_SPI_CONST_CFG && UART_INPUT_SPI_WAKE_ENABLE_CONST)
        UART_INPUT_SpiSaveConfig();

    #elif (UART_INPUT_SCB_MODE_UART_CONST_CFG && UART_INPUT_UART_WAKE_ENABLE_CONST)
        UART_INPUT_UartSaveConfig();

    #else

        UART_INPUT_backup.enableState = (uint8) UART_INPUT_GET_CTRL_ENABLED;

        if(0u != UART_INPUT_backup.enableState)
        {
            UART_INPUT_Stop();
        }

    #endif /* defined (UART_INPUT_SCB_MODE_I2C_CONST_CFG) && (UART_INPUT_I2C_WAKE_ENABLE_CONST) */

#endif /* (UART_INPUT_SCB_MODE_UNCONFIG_CONST_CFG) */
}


/*******************************************************************************
* Function Name: UART_INPUT_Wakeup
****************************************************************************//**
*
*  Prepares the UART_INPUT component for Active mode operation after 
*  Deep Sleep.
*  The “Enable wakeup from Deep Sleep Mode” selection has influence on this 
*  function implementation:
*  - Checked: restores the component Active mode configuration.
*  - Unchecked: enables the component if it was enabled before enter Deep Sleep.
*
*  This function should not be called after exiting Sleep.
*
*  \sideeffect
*   Calling the UART_INPUT_Wakeup() function without first calling the 
*   UART_INPUT_Sleep() function may produce unexpected behavior.
*
*******************************************************************************/
void UART_INPUT_Wakeup(void)
{
#if(UART_INPUT_SCB_MODE_UNCONFIG_CONST_CFG)

    if(UART_INPUT_SCB_WAKE_ENABLE_CHECK)
    {
        if(UART_INPUT_SCB_MODE_I2C_RUNTM_CFG)
        {
            UART_INPUT_I2CRestoreConfig();
        }
        else if(UART_INPUT_SCB_MODE_EZI2C_RUNTM_CFG)
        {
            UART_INPUT_EzI2CRestoreConfig();
        }
    #if(!UART_INPUT_CY_SCBIP_V1)
        else if(UART_INPUT_SCB_MODE_SPI_RUNTM_CFG)
        {
            UART_INPUT_SpiRestoreConfig();
        }
        else if(UART_INPUT_SCB_MODE_UART_RUNTM_CFG)
        {
            UART_INPUT_UartRestoreConfig();
        }
    #endif /* (!UART_INPUT_CY_SCBIP_V1) */
        else
        {
            /* Unknown mode */
        }
    }
    else
    {
        if(0u != UART_INPUT_backup.enableState)
        {
            UART_INPUT_Enable();
        }
    }

#else

    #if (UART_INPUT_SCB_MODE_I2C_CONST_CFG  && UART_INPUT_I2C_WAKE_ENABLE_CONST)
        UART_INPUT_I2CRestoreConfig();

    #elif (UART_INPUT_SCB_MODE_EZI2C_CONST_CFG && UART_INPUT_EZI2C_WAKE_ENABLE_CONST)
        UART_INPUT_EzI2CRestoreConfig();

    #elif (UART_INPUT_SCB_MODE_SPI_CONST_CFG && UART_INPUT_SPI_WAKE_ENABLE_CONST)
        UART_INPUT_SpiRestoreConfig();

    #elif (UART_INPUT_SCB_MODE_UART_CONST_CFG && UART_INPUT_UART_WAKE_ENABLE_CONST)
        UART_INPUT_UartRestoreConfig();

    #else

        if(0u != UART_INPUT_backup.enableState)
        {
            UART_INPUT_Enable();
        }

    #endif /* (UART_INPUT_I2C_WAKE_ENABLE_CONST) */

#endif /* (UART_INPUT_SCB_MODE_UNCONFIG_CONST_CFG) */
}


/* [] END OF FILE */
