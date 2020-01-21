/***************************************************************************//**
* \file .h
* \version 4.0
*
* \brief
*  This private file provides constants and parameter values for the
*  SCB Component.
*  Please do not use this file or its content in your project.
*
* Note:
*
********************************************************************************
* \copyright
* Copyright 2013-2017, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_SCB_PVT_UART_INPUT_H)
#define CY_SCB_PVT_UART_INPUT_H

#include "UART_INPUT.h"


/***************************************
*     Private Function Prototypes
***************************************/

/* APIs to service INTR_I2C_EC register */
#define UART_INPUT_SetI2CExtClkInterruptMode(interruptMask) UART_INPUT_WRITE_INTR_I2C_EC_MASK(interruptMask)
#define UART_INPUT_ClearI2CExtClkInterruptSource(interruptMask) UART_INPUT_CLEAR_INTR_I2C_EC(interruptMask)
#define UART_INPUT_GetI2CExtClkInterruptSource()                (UART_INPUT_INTR_I2C_EC_REG)
#define UART_INPUT_GetI2CExtClkInterruptMode()                  (UART_INPUT_INTR_I2C_EC_MASK_REG)
#define UART_INPUT_GetI2CExtClkInterruptSourceMasked()          (UART_INPUT_INTR_I2C_EC_MASKED_REG)

#if (!UART_INPUT_CY_SCBIP_V1)
    /* APIs to service INTR_SPI_EC register */
    #define UART_INPUT_SetSpiExtClkInterruptMode(interruptMask) \
                                                                UART_INPUT_WRITE_INTR_SPI_EC_MASK(interruptMask)
    #define UART_INPUT_ClearSpiExtClkInterruptSource(interruptMask) \
                                                                UART_INPUT_CLEAR_INTR_SPI_EC(interruptMask)
    #define UART_INPUT_GetExtSpiClkInterruptSource()                 (UART_INPUT_INTR_SPI_EC_REG)
    #define UART_INPUT_GetExtSpiClkInterruptMode()                   (UART_INPUT_INTR_SPI_EC_MASK_REG)
    #define UART_INPUT_GetExtSpiClkInterruptSourceMasked()           (UART_INPUT_INTR_SPI_EC_MASKED_REG)
#endif /* (!UART_INPUT_CY_SCBIP_V1) */

#if(UART_INPUT_SCB_MODE_UNCONFIG_CONST_CFG)
    extern void UART_INPUT_SetPins(uint32 mode, uint32 subMode, uint32 uartEnableMask);
#endif /* (UART_INPUT_SCB_MODE_UNCONFIG_CONST_CFG) */


/***************************************
*     Vars with External Linkage
***************************************/

#if (UART_INPUT_SCB_IRQ_INTERNAL)
#if !defined (CY_REMOVE_UART_INPUT_CUSTOM_INTR_HANDLER)
    extern cyisraddress UART_INPUT_customIntrHandler;
#endif /* !defined (CY_REMOVE_UART_INPUT_CUSTOM_INTR_HANDLER) */
#endif /* (UART_INPUT_SCB_IRQ_INTERNAL) */

extern UART_INPUT_BACKUP_STRUCT UART_INPUT_backup;

#if(UART_INPUT_SCB_MODE_UNCONFIG_CONST_CFG)
    /* Common configuration variables */
    extern uint8 UART_INPUT_scbMode;
    extern uint8 UART_INPUT_scbEnableWake;
    extern uint8 UART_INPUT_scbEnableIntr;

    /* I2C configuration variables */
    extern uint8 UART_INPUT_mode;
    extern uint8 UART_INPUT_acceptAddr;

    /* SPI/UART configuration variables */
    extern volatile uint8 * UART_INPUT_rxBuffer;
    extern uint8   UART_INPUT_rxDataBits;
    extern uint32  UART_INPUT_rxBufferSize;

    extern volatile uint8 * UART_INPUT_txBuffer;
    extern uint8   UART_INPUT_txDataBits;
    extern uint32  UART_INPUT_txBufferSize;

    /* EZI2C configuration variables */
    extern uint8 UART_INPUT_numberOfAddr;
    extern uint8 UART_INPUT_subAddrSize;
#endif /* (UART_INPUT_SCB_MODE_UNCONFIG_CONST_CFG) */

#if (! (UART_INPUT_SCB_MODE_I2C_CONST_CFG || \
        UART_INPUT_SCB_MODE_EZI2C_CONST_CFG))
    extern uint16 UART_INPUT_IntrTxMask;
#endif /* (! (UART_INPUT_SCB_MODE_I2C_CONST_CFG || \
              UART_INPUT_SCB_MODE_EZI2C_CONST_CFG)) */


/***************************************
*        Conditional Macro
****************************************/

#if(UART_INPUT_SCB_MODE_UNCONFIG_CONST_CFG)
    /* Defines run time operation mode */
    #define UART_INPUT_SCB_MODE_I2C_RUNTM_CFG     (UART_INPUT_SCB_MODE_I2C      == UART_INPUT_scbMode)
    #define UART_INPUT_SCB_MODE_SPI_RUNTM_CFG     (UART_INPUT_SCB_MODE_SPI      == UART_INPUT_scbMode)
    #define UART_INPUT_SCB_MODE_UART_RUNTM_CFG    (UART_INPUT_SCB_MODE_UART     == UART_INPUT_scbMode)
    #define UART_INPUT_SCB_MODE_EZI2C_RUNTM_CFG   (UART_INPUT_SCB_MODE_EZI2C    == UART_INPUT_scbMode)
    #define UART_INPUT_SCB_MODE_UNCONFIG_RUNTM_CFG \
                                                        (UART_INPUT_SCB_MODE_UNCONFIG == UART_INPUT_scbMode)

    /* Defines wakeup enable */
    #define UART_INPUT_SCB_WAKE_ENABLE_CHECK       (0u != UART_INPUT_scbEnableWake)
#endif /* (UART_INPUT_SCB_MODE_UNCONFIG_CONST_CFG) */

/* Defines maximum number of SCB pins */
#if (!UART_INPUT_CY_SCBIP_V1)
    #define UART_INPUT_SCB_PINS_NUMBER    (7u)
#else
    #define UART_INPUT_SCB_PINS_NUMBER    (2u)
#endif /* (!UART_INPUT_CY_SCBIP_V1) */

#endif /* (CY_SCB_PVT_UART_INPUT_H) */


/* [] END OF FILE */
