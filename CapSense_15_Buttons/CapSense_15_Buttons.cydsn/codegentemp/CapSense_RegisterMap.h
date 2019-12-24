/***************************************************************************//**
* \file CapSense_RegisterMap.h
* \version 5.0
*
* \brief
*   This file provides the definitions for the Component data structure register.
*
* \see CapSense v5.0 Datasheet
*
*//*****************************************************************************
* Copyright (2016-2017), Cypress Semiconductor Corporation.
********************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress) and is
* protected by and subject to worldwide patent protection (United States and
* foreign), United States copyright laws and international treaty provisions.
* Cypress hereby grants to licensee a personal, non-exclusive, non-transferable
* license to copy, use, modify, create derivative works of, and compile the
* Cypress Source Code and derivative works for the sole purpose of creating
* custom software in support of licensee product to be used only in conjunction
* with a Cypress integrated circuit as specified in the applicable agreement.
* Any reproduction, modification, translation, compilation, or representation of
* this software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the
* materials described herein. Cypress does not assume any liability arising out
* of the application or use of any product or circuit described herein. Cypress
* does not authorize its products for use as critical components in life-support
* systems where a malfunction or failure may reasonably be expected to result in
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of
* such use and in doing so indemnifies Cypress against all charges. Use may be
* limited by and subject to the applicable Cypress software license agreement.
*******************************************************************************/

#if !defined(CY_SENSE_CapSense_REGISTER_MAP_H)
#define CY_SENSE_CapSense_REGISTER_MAP_H

#include <cytypes.h>
#include "CapSense_Configuration.h"
#include "CapSense_Structure.h"

/*****************************************************************************/
/* RAM Data structure register definitions                                   */
/*****************************************************************************/
#define CapSense_CONFIG_ID_VALUE                            (CapSense_dsRam.configId)
#define CapSense_CONFIG_ID_OFFSET                           (0u)
#define CapSense_CONFIG_ID_SIZE                             (2u)
#define CapSense_CONFIG_ID_PARAM_ID                         (0x87000000u)

#define CapSense_DEVICE_ID_VALUE                            (CapSense_dsRam.deviceId)
#define CapSense_DEVICE_ID_OFFSET                           (2u)
#define CapSense_DEVICE_ID_SIZE                             (2u)
#define CapSense_DEVICE_ID_PARAM_ID                         (0x8B000002u)

#define CapSense_HW_CLOCK_VALUE                             (CapSense_dsRam.hwClock)
#define CapSense_HW_CLOCK_OFFSET                            (4u)
#define CapSense_HW_CLOCK_SIZE                              (2u)
#define CapSense_HW_CLOCK_PARAM_ID                          (0x86000004u)

#define CapSense_TUNER_CMD_VALUE                            (CapSense_dsRam.tunerCmd)
#define CapSense_TUNER_CMD_OFFSET                           (6u)
#define CapSense_TUNER_CMD_SIZE                             (2u)
#define CapSense_TUNER_CMD_PARAM_ID                         (0xA1000006u)

#define CapSense_SCAN_COUNTER_VALUE                         (CapSense_dsRam.scanCounter)
#define CapSense_SCAN_COUNTER_OFFSET                        (8u)
#define CapSense_SCAN_COUNTER_SIZE                          (2u)
#define CapSense_SCAN_COUNTER_PARAM_ID                      (0x85000008u)

#define CapSense_STATUS_VALUE                               (CapSense_dsRam.status)
#define CapSense_STATUS_OFFSET                              (12u)
#define CapSense_STATUS_SIZE                                (4u)
#define CapSense_STATUS_PARAM_ID                            (0xCB00000Cu)

#define CapSense_WDGT_ENABLE0_VALUE                         (CapSense_dsRam.wdgtEnable[0u])
#define CapSense_WDGT_ENABLE0_OFFSET                        (16u)
#define CapSense_WDGT_ENABLE0_SIZE                          (4u)
#define CapSense_WDGT_ENABLE0_PARAM_ID                      (0xE6000010u)

#define CapSense_WDGT_STATUS0_VALUE                         (CapSense_dsRam.wdgtStatus[0u])
#define CapSense_WDGT_STATUS0_OFFSET                        (20u)
#define CapSense_WDGT_STATUS0_SIZE                          (4u)
#define CapSense_WDGT_STATUS0_PARAM_ID                      (0xCC000014u)

#define CapSense_SNS_STATUS0_VALUE                          (CapSense_dsRam.snsStatus[0u])
#define CapSense_SNS_STATUS0_OFFSET                         (24u)
#define CapSense_SNS_STATUS0_SIZE                           (1u)
#define CapSense_SNS_STATUS0_PARAM_ID                       (0x48000018u)

#define CapSense_SNS_STATUS1_VALUE                          (CapSense_dsRam.snsStatus[1u])
#define CapSense_SNS_STATUS1_OFFSET                         (25u)
#define CapSense_SNS_STATUS1_SIZE                           (1u)
#define CapSense_SNS_STATUS1_PARAM_ID                       (0x4E000019u)

#define CapSense_SNS_STATUS2_VALUE                          (CapSense_dsRam.snsStatus[2u])
#define CapSense_SNS_STATUS2_OFFSET                         (26u)
#define CapSense_SNS_STATUS2_SIZE                           (1u)
#define CapSense_SNS_STATUS2_PARAM_ID                       (0x4400001Au)

#define CapSense_SNS_STATUS3_VALUE                          (CapSense_dsRam.snsStatus[3u])
#define CapSense_SNS_STATUS3_OFFSET                         (27u)
#define CapSense_SNS_STATUS3_SIZE                           (1u)
#define CapSense_SNS_STATUS3_PARAM_ID                       (0x4200001Bu)

#define CapSense_SNS_STATUS4_VALUE                          (CapSense_dsRam.snsStatus[4u])
#define CapSense_SNS_STATUS4_OFFSET                         (28u)
#define CapSense_SNS_STATUS4_SIZE                           (1u)
#define CapSense_SNS_STATUS4_PARAM_ID                       (0x4900001Cu)

#define CapSense_SNS_STATUS5_VALUE                          (CapSense_dsRam.snsStatus[5u])
#define CapSense_SNS_STATUS5_OFFSET                         (29u)
#define CapSense_SNS_STATUS5_SIZE                           (1u)
#define CapSense_SNS_STATUS5_PARAM_ID                       (0x4F00001Du)

#define CapSense_SNS_STATUS6_VALUE                          (CapSense_dsRam.snsStatus[6u])
#define CapSense_SNS_STATUS6_OFFSET                         (30u)
#define CapSense_SNS_STATUS6_SIZE                           (1u)
#define CapSense_SNS_STATUS6_PARAM_ID                       (0x4500001Eu)

#define CapSense_SNS_STATUS7_VALUE                          (CapSense_dsRam.snsStatus[7u])
#define CapSense_SNS_STATUS7_OFFSET                         (31u)
#define CapSense_SNS_STATUS7_SIZE                           (1u)
#define CapSense_SNS_STATUS7_PARAM_ID                       (0x4300001Fu)

#define CapSense_SNS_STATUS8_VALUE                          (CapSense_dsRam.snsStatus[8u])
#define CapSense_SNS_STATUS8_OFFSET                         (32u)
#define CapSense_SNS_STATUS8_SIZE                           (1u)
#define CapSense_SNS_STATUS8_PARAM_ID                       (0x45000020u)

#define CapSense_SNS_STATUS9_VALUE                          (CapSense_dsRam.snsStatus[9u])
#define CapSense_SNS_STATUS9_OFFSET                         (33u)
#define CapSense_SNS_STATUS9_SIZE                           (1u)
#define CapSense_SNS_STATUS9_PARAM_ID                       (0x43000021u)

#define CapSense_SNS_STATUS10_VALUE                         (CapSense_dsRam.snsStatus[10u])
#define CapSense_SNS_STATUS10_OFFSET                        (34u)
#define CapSense_SNS_STATUS10_SIZE                          (1u)
#define CapSense_SNS_STATUS10_PARAM_ID                      (0x49000022u)

#define CapSense_SNS_STATUS11_VALUE                         (CapSense_dsRam.snsStatus[11u])
#define CapSense_SNS_STATUS11_OFFSET                        (35u)
#define CapSense_SNS_STATUS11_SIZE                          (1u)
#define CapSense_SNS_STATUS11_PARAM_ID                      (0x4F000023u)

#define CapSense_SNS_STATUS12_VALUE                         (CapSense_dsRam.snsStatus[12u])
#define CapSense_SNS_STATUS12_OFFSET                        (36u)
#define CapSense_SNS_STATUS12_SIZE                          (1u)
#define CapSense_SNS_STATUS12_PARAM_ID                      (0x44000024u)

#define CapSense_SNS_STATUS13_VALUE                         (CapSense_dsRam.snsStatus[13u])
#define CapSense_SNS_STATUS13_OFFSET                        (37u)
#define CapSense_SNS_STATUS13_SIZE                          (1u)
#define CapSense_SNS_STATUS13_PARAM_ID                      (0x42000025u)

#define CapSense_SNS_STATUS14_VALUE                         (CapSense_dsRam.snsStatus[14u])
#define CapSense_SNS_STATUS14_OFFSET                        (38u)
#define CapSense_SNS_STATUS14_SIZE                          (1u)
#define CapSense_SNS_STATUS14_PARAM_ID                      (0x48000026u)

#define CapSense_CSD0_CONFIG_VALUE                          (CapSense_dsRam.csd0Config)
#define CapSense_CSD0_CONFIG_OFFSET                         (40u)
#define CapSense_CSD0_CONFIG_SIZE                           (2u)
#define CapSense_CSD0_CONFIG_PARAM_ID                       (0xA9800028u)

#define CapSense_MOD_CSD_CLK_VALUE                          (CapSense_dsRam.modCsdClk)
#define CapSense_MOD_CSD_CLK_OFFSET                         (42u)
#define CapSense_MOD_CSD_CLK_SIZE                           (1u)
#define CapSense_MOD_CSD_CLK_PARAM_ID                       (0x6D80002Au)

#define CapSense_BUTTON0_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button0.resolution)
#define CapSense_BUTTON0_RESOLUTION_OFFSET                  (44u)
#define CapSense_BUTTON0_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON0_RESOLUTION_PARAM_ID                (0x8380002Cu)

#define CapSense_BUTTON0_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button0.fingerTh)
#define CapSense_BUTTON0_FINGER_TH_OFFSET                   (46u)
#define CapSense_BUTTON0_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON0_FINGER_TH_PARAM_ID                 (0x8F80002Eu)

#define CapSense_BUTTON0_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button0.noiseTh)
#define CapSense_BUTTON0_NOISE_TH_OFFSET                    (48u)
#define CapSense_BUTTON0_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON0_NOISE_TH_PARAM_ID                  (0x4D800030u)

#define CapSense_BUTTON0_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button0.nNoiseTh)
#define CapSense_BUTTON0_NNOISE_TH_OFFSET                   (49u)
#define CapSense_BUTTON0_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON0_NNOISE_TH_PARAM_ID                 (0x4B800031u)

#define CapSense_BUTTON0_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button0.hysteresis)
#define CapSense_BUTTON0_HYSTERESIS_OFFSET                  (50u)
#define CapSense_BUTTON0_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON0_HYSTERESIS_PARAM_ID                (0x41800032u)

#define CapSense_BUTTON0_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button0.onDebounce)
#define CapSense_BUTTON0_ON_DEBOUNCE_OFFSET                 (51u)
#define CapSense_BUTTON0_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON0_ON_DEBOUNCE_PARAM_ID               (0x47800033u)

#define CapSense_BUTTON0_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button0.lowBslnRst)
#define CapSense_BUTTON0_LOW_BSLN_RST_OFFSET                (52u)
#define CapSense_BUTTON0_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON0_LOW_BSLN_RST_PARAM_ID              (0x4C800034u)

#define CapSense_BUTTON0_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button0.idacMod[0u])
#define CapSense_BUTTON0_IDAC_MOD0_OFFSET                   (53u)
#define CapSense_BUTTON0_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON0_IDAC_MOD0_PARAM_ID                 (0x47000035u)

#define CapSense_BUTTON0_SNS_CLK_VALUE                      (CapSense_dsRam.wdgtList.button0.snsClk)
#define CapSense_BUTTON0_SNS_CLK_OFFSET                     (54u)
#define CapSense_BUTTON0_SNS_CLK_SIZE                       (2u)
#define CapSense_BUTTON0_SNS_CLK_PARAM_ID                   (0x88800036u)

#define CapSense_BUTTON0_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button0.snsClkSource)
#define CapSense_BUTTON0_SNS_CLK_SOURCE_OFFSET              (56u)
#define CapSense_BUTTON0_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON0_SNS_CLK_SOURCE_PARAM_ID            (0x4F800038u)

#define CapSense_BUTTON0_FINGER_CAP_VALUE                   (CapSense_dsRam.wdgtList.button0.fingerCap)
#define CapSense_BUTTON0_FINGER_CAP_OFFSET                  (58u)
#define CapSense_BUTTON0_FINGER_CAP_SIZE                    (2u)
#define CapSense_BUTTON0_FINGER_CAP_PARAM_ID                (0xAD00003Au)

#define CapSense_BUTTON0_SIGPFC_VALUE                       (CapSense_dsRam.wdgtList.button0.sigPFC)
#define CapSense_BUTTON0_SIGPFC_OFFSET                      (60u)
#define CapSense_BUTTON0_SIGPFC_SIZE                        (2u)
#define CapSense_BUTTON0_SIGPFC_PARAM_ID                    (0xA000003Cu)

#define CapSense_BUTTON1_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button1.resolution)
#define CapSense_BUTTON1_RESOLUTION_OFFSET                  (62u)
#define CapSense_BUTTON1_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON1_RESOLUTION_PARAM_ID                (0x8981003Eu)

#define CapSense_BUTTON1_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button1.fingerTh)
#define CapSense_BUTTON1_FINGER_TH_OFFSET                   (64u)
#define CapSense_BUTTON1_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON1_FINGER_TH_PARAM_ID                 (0x84810040u)

#define CapSense_BUTTON1_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button1.noiseTh)
#define CapSense_BUTTON1_NOISE_TH_OFFSET                    (66u)
#define CapSense_BUTTON1_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON1_NOISE_TH_PARAM_ID                  (0x40810042u)

#define CapSense_BUTTON1_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button1.nNoiseTh)
#define CapSense_BUTTON1_NNOISE_TH_OFFSET                   (67u)
#define CapSense_BUTTON1_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON1_NNOISE_TH_PARAM_ID                 (0x46810043u)

#define CapSense_BUTTON1_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button1.hysteresis)
#define CapSense_BUTTON1_HYSTERESIS_OFFSET                  (68u)
#define CapSense_BUTTON1_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON1_HYSTERESIS_PARAM_ID                (0x4D810044u)

#define CapSense_BUTTON1_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button1.onDebounce)
#define CapSense_BUTTON1_ON_DEBOUNCE_OFFSET                 (69u)
#define CapSense_BUTTON1_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON1_ON_DEBOUNCE_PARAM_ID               (0x4B810045u)

#define CapSense_BUTTON1_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button1.lowBslnRst)
#define CapSense_BUTTON1_LOW_BSLN_RST_OFFSET                (70u)
#define CapSense_BUTTON1_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON1_LOW_BSLN_RST_PARAM_ID              (0x41810046u)

#define CapSense_BUTTON1_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button1.idacMod[0u])
#define CapSense_BUTTON1_IDAC_MOD0_OFFSET                   (71u)
#define CapSense_BUTTON1_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON1_IDAC_MOD0_PARAM_ID                 (0x4A010047u)

#define CapSense_BUTTON1_SNS_CLK_VALUE                      (CapSense_dsRam.wdgtList.button1.snsClk)
#define CapSense_BUTTON1_SNS_CLK_OFFSET                     (72u)
#define CapSense_BUTTON1_SNS_CLK_SIZE                       (2u)
#define CapSense_BUTTON1_SNS_CLK_PARAM_ID                   (0x86810048u)

#define CapSense_BUTTON1_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button1.snsClkSource)
#define CapSense_BUTTON1_SNS_CLK_SOURCE_OFFSET              (74u)
#define CapSense_BUTTON1_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON1_SNS_CLK_SOURCE_PARAM_ID            (0x4281004Au)

#define CapSense_BUTTON1_FINGER_CAP_VALUE                   (CapSense_dsRam.wdgtList.button1.fingerCap)
#define CapSense_BUTTON1_FINGER_CAP_OFFSET                  (76u)
#define CapSense_BUTTON1_FINGER_CAP_SIZE                    (2u)
#define CapSense_BUTTON1_FINGER_CAP_PARAM_ID                (0xA101004Cu)

#define CapSense_BUTTON1_SIGPFC_VALUE                       (CapSense_dsRam.wdgtList.button1.sigPFC)
#define CapSense_BUTTON1_SIGPFC_OFFSET                      (78u)
#define CapSense_BUTTON1_SIGPFC_SIZE                        (2u)
#define CapSense_BUTTON1_SIGPFC_PARAM_ID                    (0xAD01004Eu)

#define CapSense_BUTTON2_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button2.resolution)
#define CapSense_BUTTON2_RESOLUTION_OFFSET                  (80u)
#define CapSense_BUTTON2_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON2_RESOLUTION_PARAM_ID                (0x84820050u)

#define CapSense_BUTTON2_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button2.fingerTh)
#define CapSense_BUTTON2_FINGER_TH_OFFSET                   (82u)
#define CapSense_BUTTON2_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON2_FINGER_TH_PARAM_ID                 (0x88820052u)

#define CapSense_BUTTON2_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button2.noiseTh)
#define CapSense_BUTTON2_NOISE_TH_OFFSET                    (84u)
#define CapSense_BUTTON2_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON2_NOISE_TH_PARAM_ID                  (0x4D820054u)

#define CapSense_BUTTON2_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button2.nNoiseTh)
#define CapSense_BUTTON2_NNOISE_TH_OFFSET                   (85u)
#define CapSense_BUTTON2_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON2_NNOISE_TH_PARAM_ID                 (0x4B820055u)

#define CapSense_BUTTON2_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button2.hysteresis)
#define CapSense_BUTTON2_HYSTERESIS_OFFSET                  (86u)
#define CapSense_BUTTON2_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON2_HYSTERESIS_PARAM_ID                (0x41820056u)

#define CapSense_BUTTON2_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button2.onDebounce)
#define CapSense_BUTTON2_ON_DEBOUNCE_OFFSET                 (87u)
#define CapSense_BUTTON2_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON2_ON_DEBOUNCE_PARAM_ID               (0x47820057u)

#define CapSense_BUTTON2_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button2.lowBslnRst)
#define CapSense_BUTTON2_LOW_BSLN_RST_OFFSET                (88u)
#define CapSense_BUTTON2_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON2_LOW_BSLN_RST_PARAM_ID              (0x4E820058u)

#define CapSense_BUTTON2_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button2.idacMod[0u])
#define CapSense_BUTTON2_IDAC_MOD0_OFFSET                   (89u)
#define CapSense_BUTTON2_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON2_IDAC_MOD0_PARAM_ID                 (0x45020059u)

#define CapSense_BUTTON2_SNS_CLK_VALUE                      (CapSense_dsRam.wdgtList.button2.snsClk)
#define CapSense_BUTTON2_SNS_CLK_OFFSET                     (90u)
#define CapSense_BUTTON2_SNS_CLK_SIZE                       (2u)
#define CapSense_BUTTON2_SNS_CLK_PARAM_ID                   (0x8A82005Au)

#define CapSense_BUTTON2_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button2.snsClkSource)
#define CapSense_BUTTON2_SNS_CLK_SOURCE_OFFSET              (92u)
#define CapSense_BUTTON2_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON2_SNS_CLK_SOURCE_PARAM_ID            (0x4F82005Cu)

#define CapSense_BUTTON2_FINGER_CAP_VALUE                   (CapSense_dsRam.wdgtList.button2.fingerCap)
#define CapSense_BUTTON2_FINGER_CAP_OFFSET                  (94u)
#define CapSense_BUTTON2_FINGER_CAP_SIZE                    (2u)
#define CapSense_BUTTON2_FINGER_CAP_PARAM_ID                (0xAD02005Eu)

#define CapSense_BUTTON2_SIGPFC_VALUE                       (CapSense_dsRam.wdgtList.button2.sigPFC)
#define CapSense_BUTTON2_SIGPFC_OFFSET                      (96u)
#define CapSense_BUTTON2_SIGPFC_SIZE                        (2u)
#define CapSense_BUTTON2_SIGPFC_PARAM_ID                    (0xAD020060u)

#define CapSense_BUTTON3_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button3.resolution)
#define CapSense_BUTTON3_RESOLUTION_OFFSET                  (98u)
#define CapSense_BUTTON3_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON3_RESOLUTION_PARAM_ID                (0x84830062u)

#define CapSense_BUTTON3_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button3.fingerTh)
#define CapSense_BUTTON3_FINGER_TH_OFFSET                   (100u)
#define CapSense_BUTTON3_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON3_FINGER_TH_PARAM_ID                 (0x89830064u)

#define CapSense_BUTTON3_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button3.noiseTh)
#define CapSense_BUTTON3_NOISE_TH_OFFSET                    (102u)
#define CapSense_BUTTON3_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON3_NOISE_TH_PARAM_ID                  (0x4D830066u)

#define CapSense_BUTTON3_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button3.nNoiseTh)
#define CapSense_BUTTON3_NNOISE_TH_OFFSET                   (103u)
#define CapSense_BUTTON3_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON3_NNOISE_TH_PARAM_ID                 (0x4B830067u)

#define CapSense_BUTTON3_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button3.hysteresis)
#define CapSense_BUTTON3_HYSTERESIS_OFFSET                  (104u)
#define CapSense_BUTTON3_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON3_HYSTERESIS_PARAM_ID                (0x42830068u)

#define CapSense_BUTTON3_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button3.onDebounce)
#define CapSense_BUTTON3_ON_DEBOUNCE_OFFSET                 (105u)
#define CapSense_BUTTON3_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON3_ON_DEBOUNCE_PARAM_ID               (0x44830069u)

#define CapSense_BUTTON3_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button3.lowBslnRst)
#define CapSense_BUTTON3_LOW_BSLN_RST_OFFSET                (106u)
#define CapSense_BUTTON3_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON3_LOW_BSLN_RST_PARAM_ID              (0x4E83006Au)

#define CapSense_BUTTON3_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button3.idacMod[0u])
#define CapSense_BUTTON3_IDAC_MOD0_OFFSET                   (107u)
#define CapSense_BUTTON3_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON3_IDAC_MOD0_PARAM_ID                 (0x4503006Bu)

#define CapSense_BUTTON3_SNS_CLK_VALUE                      (CapSense_dsRam.wdgtList.button3.snsClk)
#define CapSense_BUTTON3_SNS_CLK_OFFSET                     (108u)
#define CapSense_BUTTON3_SNS_CLK_SIZE                       (2u)
#define CapSense_BUTTON3_SNS_CLK_PARAM_ID                   (0x8B83006Cu)

#define CapSense_BUTTON3_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button3.snsClkSource)
#define CapSense_BUTTON3_SNS_CLK_SOURCE_OFFSET              (110u)
#define CapSense_BUTTON3_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON3_SNS_CLK_SOURCE_PARAM_ID            (0x4F83006Eu)

#define CapSense_BUTTON3_FINGER_CAP_VALUE                   (CapSense_dsRam.wdgtList.button3.fingerCap)
#define CapSense_BUTTON3_FINGER_CAP_OFFSET                  (112u)
#define CapSense_BUTTON3_FINGER_CAP_SIZE                    (2u)
#define CapSense_BUTTON3_FINGER_CAP_PARAM_ID                (0xAB030070u)

#define CapSense_BUTTON3_SIGPFC_VALUE                       (CapSense_dsRam.wdgtList.button3.sigPFC)
#define CapSense_BUTTON3_SIGPFC_OFFSET                      (114u)
#define CapSense_BUTTON3_SIGPFC_SIZE                        (2u)
#define CapSense_BUTTON3_SIGPFC_PARAM_ID                    (0xA7030072u)

#define CapSense_BUTTON4_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button4.resolution)
#define CapSense_BUTTON4_RESOLUTION_OFFSET                  (116u)
#define CapSense_BUTTON4_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON4_RESOLUTION_PARAM_ID                (0x85840074u)

#define CapSense_BUTTON4_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button4.fingerTh)
#define CapSense_BUTTON4_FINGER_TH_OFFSET                   (118u)
#define CapSense_BUTTON4_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON4_FINGER_TH_PARAM_ID                 (0x89840076u)

#define CapSense_BUTTON4_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button4.noiseTh)
#define CapSense_BUTTON4_NOISE_TH_OFFSET                    (120u)
#define CapSense_BUTTON4_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON4_NOISE_TH_PARAM_ID                  (0x4E840078u)

#define CapSense_BUTTON4_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button4.nNoiseTh)
#define CapSense_BUTTON4_NNOISE_TH_OFFSET                   (121u)
#define CapSense_BUTTON4_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON4_NNOISE_TH_PARAM_ID                 (0x48840079u)

#define CapSense_BUTTON4_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button4.hysteresis)
#define CapSense_BUTTON4_HYSTERESIS_OFFSET                  (122u)
#define CapSense_BUTTON4_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON4_HYSTERESIS_PARAM_ID                (0x4284007Au)

#define CapSense_BUTTON4_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button4.onDebounce)
#define CapSense_BUTTON4_ON_DEBOUNCE_OFFSET                 (123u)
#define CapSense_BUTTON4_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON4_ON_DEBOUNCE_PARAM_ID               (0x4484007Bu)

#define CapSense_BUTTON4_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button4.lowBslnRst)
#define CapSense_BUTTON4_LOW_BSLN_RST_OFFSET                (124u)
#define CapSense_BUTTON4_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON4_LOW_BSLN_RST_PARAM_ID              (0x4F84007Cu)

#define CapSense_BUTTON4_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button4.idacMod[0u])
#define CapSense_BUTTON4_IDAC_MOD0_OFFSET                   (125u)
#define CapSense_BUTTON4_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON4_IDAC_MOD0_PARAM_ID                 (0x4404007Du)

#define CapSense_BUTTON4_SNS_CLK_VALUE                      (CapSense_dsRam.wdgtList.button4.snsClk)
#define CapSense_BUTTON4_SNS_CLK_OFFSET                     (126u)
#define CapSense_BUTTON4_SNS_CLK_SIZE                       (2u)
#define CapSense_BUTTON4_SNS_CLK_PARAM_ID                   (0x8B84007Eu)

#define CapSense_BUTTON4_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button4.snsClkSource)
#define CapSense_BUTTON4_SNS_CLK_SOURCE_OFFSET              (128u)
#define CapSense_BUTTON4_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON4_SNS_CLK_SOURCE_PARAM_ID            (0x4D840080u)

#define CapSense_BUTTON4_FINGER_CAP_VALUE                   (CapSense_dsRam.wdgtList.button4.fingerCap)
#define CapSense_BUTTON4_FINGER_CAP_OFFSET                  (130u)
#define CapSense_BUTTON4_FINGER_CAP_SIZE                    (2u)
#define CapSense_BUTTON4_FINGER_CAP_PARAM_ID                (0xAF040082u)

#define CapSense_BUTTON4_SIGPFC_VALUE                       (CapSense_dsRam.wdgtList.button4.sigPFC)
#define CapSense_BUTTON4_SIGPFC_OFFSET                      (132u)
#define CapSense_BUTTON4_SIGPFC_SIZE                        (2u)
#define CapSense_BUTTON4_SIGPFC_PARAM_ID                    (0xA2040084u)

#define CapSense_BUTTON5_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button5.resolution)
#define CapSense_BUTTON5_RESOLUTION_OFFSET                  (134u)
#define CapSense_BUTTON5_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON5_RESOLUTION_PARAM_ID                (0x8B850086u)

#define CapSense_BUTTON5_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button5.fingerTh)
#define CapSense_BUTTON5_FINGER_TH_OFFSET                   (136u)
#define CapSense_BUTTON5_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON5_FINGER_TH_PARAM_ID                 (0x84850088u)

#define CapSense_BUTTON5_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button5.noiseTh)
#define CapSense_BUTTON5_NOISE_TH_OFFSET                    (138u)
#define CapSense_BUTTON5_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON5_NOISE_TH_PARAM_ID                  (0x4085008Au)

#define CapSense_BUTTON5_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button5.nNoiseTh)
#define CapSense_BUTTON5_NNOISE_TH_OFFSET                   (139u)
#define CapSense_BUTTON5_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON5_NNOISE_TH_PARAM_ID                 (0x4685008Bu)

#define CapSense_BUTTON5_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button5.hysteresis)
#define CapSense_BUTTON5_HYSTERESIS_OFFSET                  (140u)
#define CapSense_BUTTON5_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON5_HYSTERESIS_PARAM_ID                (0x4D85008Cu)

#define CapSense_BUTTON5_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button5.onDebounce)
#define CapSense_BUTTON5_ON_DEBOUNCE_OFFSET                 (141u)
#define CapSense_BUTTON5_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON5_ON_DEBOUNCE_PARAM_ID               (0x4B85008Du)

#define CapSense_BUTTON5_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button5.lowBslnRst)
#define CapSense_BUTTON5_LOW_BSLN_RST_OFFSET                (142u)
#define CapSense_BUTTON5_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON5_LOW_BSLN_RST_PARAM_ID              (0x4185008Eu)

#define CapSense_BUTTON5_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button5.idacMod[0u])
#define CapSense_BUTTON5_IDAC_MOD0_OFFSET                   (143u)
#define CapSense_BUTTON5_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON5_IDAC_MOD0_PARAM_ID                 (0x4A05008Fu)

#define CapSense_BUTTON5_SNS_CLK_VALUE                      (CapSense_dsRam.wdgtList.button5.snsClk)
#define CapSense_BUTTON5_SNS_CLK_OFFSET                     (144u)
#define CapSense_BUTTON5_SNS_CLK_SIZE                       (2u)
#define CapSense_BUTTON5_SNS_CLK_PARAM_ID                   (0x83850090u)

#define CapSense_BUTTON5_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button5.snsClkSource)
#define CapSense_BUTTON5_SNS_CLK_SOURCE_OFFSET              (146u)
#define CapSense_BUTTON5_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON5_SNS_CLK_SOURCE_PARAM_ID            (0x47850092u)

#define CapSense_BUTTON5_FINGER_CAP_VALUE                   (CapSense_dsRam.wdgtList.button5.fingerCap)
#define CapSense_BUTTON5_FINGER_CAP_OFFSET                  (148u)
#define CapSense_BUTTON5_FINGER_CAP_SIZE                    (2u)
#define CapSense_BUTTON5_FINGER_CAP_PARAM_ID                (0xA4050094u)

#define CapSense_BUTTON5_SIGPFC_VALUE                       (CapSense_dsRam.wdgtList.button5.sigPFC)
#define CapSense_BUTTON5_SIGPFC_OFFSET                      (150u)
#define CapSense_BUTTON5_SIGPFC_SIZE                        (2u)
#define CapSense_BUTTON5_SIGPFC_PARAM_ID                    (0xA8050096u)

#define CapSense_BUTTON6_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button6.resolution)
#define CapSense_BUTTON6_RESOLUTION_OFFSET                  (152u)
#define CapSense_BUTTON6_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON6_RESOLUTION_PARAM_ID                (0x84860098u)

#define CapSense_BUTTON6_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button6.fingerTh)
#define CapSense_BUTTON6_FINGER_TH_OFFSET                   (154u)
#define CapSense_BUTTON6_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON6_FINGER_TH_PARAM_ID                 (0x8886009Au)

#define CapSense_BUTTON6_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button6.noiseTh)
#define CapSense_BUTTON6_NOISE_TH_OFFSET                    (156u)
#define CapSense_BUTTON6_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON6_NOISE_TH_PARAM_ID                  (0x4D86009Cu)

#define CapSense_BUTTON6_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button6.nNoiseTh)
#define CapSense_BUTTON6_NNOISE_TH_OFFSET                   (157u)
#define CapSense_BUTTON6_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON6_NNOISE_TH_PARAM_ID                 (0x4B86009Du)

#define CapSense_BUTTON6_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button6.hysteresis)
#define CapSense_BUTTON6_HYSTERESIS_OFFSET                  (158u)
#define CapSense_BUTTON6_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON6_HYSTERESIS_PARAM_ID                (0x4186009Eu)

#define CapSense_BUTTON6_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button6.onDebounce)
#define CapSense_BUTTON6_ON_DEBOUNCE_OFFSET                 (159u)
#define CapSense_BUTTON6_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON6_ON_DEBOUNCE_PARAM_ID               (0x4786009Fu)

#define CapSense_BUTTON6_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button6.lowBslnRst)
#define CapSense_BUTTON6_LOW_BSLN_RST_OFFSET                (160u)
#define CapSense_BUTTON6_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON6_LOW_BSLN_RST_PARAM_ID              (0x418600A0u)

#define CapSense_BUTTON6_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button6.idacMod[0u])
#define CapSense_BUTTON6_IDAC_MOD0_OFFSET                   (161u)
#define CapSense_BUTTON6_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON6_IDAC_MOD0_PARAM_ID                 (0x4A0600A1u)

#define CapSense_BUTTON6_SNS_CLK_VALUE                      (CapSense_dsRam.wdgtList.button6.snsClk)
#define CapSense_BUTTON6_SNS_CLK_OFFSET                     (162u)
#define CapSense_BUTTON6_SNS_CLK_SIZE                       (2u)
#define CapSense_BUTTON6_SNS_CLK_PARAM_ID                   (0x858600A2u)

#define CapSense_BUTTON6_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button6.snsClkSource)
#define CapSense_BUTTON6_SNS_CLK_SOURCE_OFFSET              (164u)
#define CapSense_BUTTON6_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON6_SNS_CLK_SOURCE_PARAM_ID            (0x408600A4u)

#define CapSense_BUTTON6_FINGER_CAP_VALUE                   (CapSense_dsRam.wdgtList.button6.fingerCap)
#define CapSense_BUTTON6_FINGER_CAP_OFFSET                  (166u)
#define CapSense_BUTTON6_FINGER_CAP_SIZE                    (2u)
#define CapSense_BUTTON6_FINGER_CAP_PARAM_ID                (0xA20600A6u)

#define CapSense_BUTTON6_SIGPFC_VALUE                       (CapSense_dsRam.wdgtList.button6.sigPFC)
#define CapSense_BUTTON6_SIGPFC_OFFSET                      (168u)
#define CapSense_BUTTON6_SIGPFC_SIZE                        (2u)
#define CapSense_BUTTON6_SIGPFC_PARAM_ID                    (0xAD0600A8u)

#define CapSense_BUTTON7_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button7.resolution)
#define CapSense_BUTTON7_RESOLUTION_OFFSET                  (170u)
#define CapSense_BUTTON7_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON7_RESOLUTION_PARAM_ID                (0x848700AAu)

#define CapSense_BUTTON7_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button7.fingerTh)
#define CapSense_BUTTON7_FINGER_TH_OFFSET                   (172u)
#define CapSense_BUTTON7_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON7_FINGER_TH_PARAM_ID                 (0x898700ACu)

#define CapSense_BUTTON7_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button7.noiseTh)
#define CapSense_BUTTON7_NOISE_TH_OFFSET                    (174u)
#define CapSense_BUTTON7_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON7_NOISE_TH_PARAM_ID                  (0x4D8700AEu)

#define CapSense_BUTTON7_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button7.nNoiseTh)
#define CapSense_BUTTON7_NNOISE_TH_OFFSET                   (175u)
#define CapSense_BUTTON7_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON7_NNOISE_TH_PARAM_ID                 (0x4B8700AFu)

#define CapSense_BUTTON7_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button7.hysteresis)
#define CapSense_BUTTON7_HYSTERESIS_OFFSET                  (176u)
#define CapSense_BUTTON7_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON7_HYSTERESIS_PARAM_ID                (0x478700B0u)

#define CapSense_BUTTON7_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button7.onDebounce)
#define CapSense_BUTTON7_ON_DEBOUNCE_OFFSET                 (177u)
#define CapSense_BUTTON7_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON7_ON_DEBOUNCE_PARAM_ID               (0x418700B1u)

#define CapSense_BUTTON7_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button7.lowBslnRst)
#define CapSense_BUTTON7_LOW_BSLN_RST_OFFSET                (178u)
#define CapSense_BUTTON7_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON7_LOW_BSLN_RST_PARAM_ID              (0x4B8700B2u)

#define CapSense_BUTTON7_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button7.idacMod[0u])
#define CapSense_BUTTON7_IDAC_MOD0_OFFSET                   (179u)
#define CapSense_BUTTON7_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON7_IDAC_MOD0_PARAM_ID                 (0x400700B3u)

#define CapSense_BUTTON7_SNS_CLK_VALUE                      (CapSense_dsRam.wdgtList.button7.snsClk)
#define CapSense_BUTTON7_SNS_CLK_OFFSET                     (180u)
#define CapSense_BUTTON7_SNS_CLK_SIZE                       (2u)
#define CapSense_BUTTON7_SNS_CLK_PARAM_ID                   (0x8E8700B4u)

#define CapSense_BUTTON7_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button7.snsClkSource)
#define CapSense_BUTTON7_SNS_CLK_SOURCE_OFFSET              (182u)
#define CapSense_BUTTON7_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON7_SNS_CLK_SOURCE_PARAM_ID            (0x4A8700B6u)

#define CapSense_BUTTON7_FINGER_CAP_VALUE                   (CapSense_dsRam.wdgtList.button7.fingerCap)
#define CapSense_BUTTON7_FINGER_CAP_OFFSET                  (184u)
#define CapSense_BUTTON7_FINGER_CAP_SIZE                    (2u)
#define CapSense_BUTTON7_FINGER_CAP_PARAM_ID                (0xAB0700B8u)

#define CapSense_BUTTON7_SIGPFC_VALUE                       (CapSense_dsRam.wdgtList.button7.sigPFC)
#define CapSense_BUTTON7_SIGPFC_OFFSET                      (186u)
#define CapSense_BUTTON7_SIGPFC_SIZE                        (2u)
#define CapSense_BUTTON7_SIGPFC_PARAM_ID                    (0xA70700BAu)

#define CapSense_BUTTON8_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button8.resolution)
#define CapSense_BUTTON8_RESOLUTION_OFFSET                  (188u)
#define CapSense_BUTTON8_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON8_RESOLUTION_PARAM_ID                (0x848800BCu)

#define CapSense_BUTTON8_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button8.fingerTh)
#define CapSense_BUTTON8_FINGER_TH_OFFSET                   (190u)
#define CapSense_BUTTON8_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON8_FINGER_TH_PARAM_ID                 (0x888800BEu)

#define CapSense_BUTTON8_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button8.noiseTh)
#define CapSense_BUTTON8_NOISE_TH_OFFSET                    (192u)
#define CapSense_BUTTON8_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON8_NOISE_TH_PARAM_ID                  (0x4D8800C0u)

#define CapSense_BUTTON8_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button8.nNoiseTh)
#define CapSense_BUTTON8_NNOISE_TH_OFFSET                   (193u)
#define CapSense_BUTTON8_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON8_NNOISE_TH_PARAM_ID                 (0x4B8800C1u)

#define CapSense_BUTTON8_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button8.hysteresis)
#define CapSense_BUTTON8_HYSTERESIS_OFFSET                  (194u)
#define CapSense_BUTTON8_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON8_HYSTERESIS_PARAM_ID                (0x418800C2u)

#define CapSense_BUTTON8_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button8.onDebounce)
#define CapSense_BUTTON8_ON_DEBOUNCE_OFFSET                 (195u)
#define CapSense_BUTTON8_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON8_ON_DEBOUNCE_PARAM_ID               (0x478800C3u)

#define CapSense_BUTTON8_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button8.lowBslnRst)
#define CapSense_BUTTON8_LOW_BSLN_RST_OFFSET                (196u)
#define CapSense_BUTTON8_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON8_LOW_BSLN_RST_PARAM_ID              (0x4C8800C4u)

#define CapSense_BUTTON8_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button8.idacMod[0u])
#define CapSense_BUTTON8_IDAC_MOD0_OFFSET                   (197u)
#define CapSense_BUTTON8_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON8_IDAC_MOD0_PARAM_ID                 (0x470800C5u)

#define CapSense_BUTTON8_SNS_CLK_VALUE                      (CapSense_dsRam.wdgtList.button8.snsClk)
#define CapSense_BUTTON8_SNS_CLK_OFFSET                     (198u)
#define CapSense_BUTTON8_SNS_CLK_SIZE                       (2u)
#define CapSense_BUTTON8_SNS_CLK_PARAM_ID                   (0x888800C6u)

#define CapSense_BUTTON8_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button8.snsClkSource)
#define CapSense_BUTTON8_SNS_CLK_SOURCE_OFFSET              (200u)
#define CapSense_BUTTON8_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON8_SNS_CLK_SOURCE_PARAM_ID            (0x4F8800C8u)

#define CapSense_BUTTON8_FINGER_CAP_VALUE                   (CapSense_dsRam.wdgtList.button8.fingerCap)
#define CapSense_BUTTON8_FINGER_CAP_OFFSET                  (202u)
#define CapSense_BUTTON8_FINGER_CAP_SIZE                    (2u)
#define CapSense_BUTTON8_FINGER_CAP_PARAM_ID                (0xAD0800CAu)

#define CapSense_BUTTON8_SIGPFC_VALUE                       (CapSense_dsRam.wdgtList.button8.sigPFC)
#define CapSense_BUTTON8_SIGPFC_OFFSET                      (204u)
#define CapSense_BUTTON8_SIGPFC_SIZE                        (2u)
#define CapSense_BUTTON8_SIGPFC_PARAM_ID                    (0xA00800CCu)

#define CapSense_BUTTON9_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button9.resolution)
#define CapSense_BUTTON9_RESOLUTION_OFFSET                  (206u)
#define CapSense_BUTTON9_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON9_RESOLUTION_PARAM_ID                (0x898900CEu)

#define CapSense_BUTTON9_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button9.fingerTh)
#define CapSense_BUTTON9_FINGER_TH_OFFSET                   (208u)
#define CapSense_BUTTON9_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON9_FINGER_TH_PARAM_ID                 (0x838900D0u)

#define CapSense_BUTTON9_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button9.noiseTh)
#define CapSense_BUTTON9_NOISE_TH_OFFSET                    (210u)
#define CapSense_BUTTON9_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON9_NOISE_TH_PARAM_ID                  (0x478900D2u)

#define CapSense_BUTTON9_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button9.nNoiseTh)
#define CapSense_BUTTON9_NNOISE_TH_OFFSET                   (211u)
#define CapSense_BUTTON9_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON9_NNOISE_TH_PARAM_ID                 (0x418900D3u)

#define CapSense_BUTTON9_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button9.hysteresis)
#define CapSense_BUTTON9_HYSTERESIS_OFFSET                  (212u)
#define CapSense_BUTTON9_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON9_HYSTERESIS_PARAM_ID                (0x4A8900D4u)

#define CapSense_BUTTON9_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button9.onDebounce)
#define CapSense_BUTTON9_ON_DEBOUNCE_OFFSET                 (213u)
#define CapSense_BUTTON9_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON9_ON_DEBOUNCE_PARAM_ID               (0x4C8900D5u)

#define CapSense_BUTTON9_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button9.lowBslnRst)
#define CapSense_BUTTON9_LOW_BSLN_RST_OFFSET                (214u)
#define CapSense_BUTTON9_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON9_LOW_BSLN_RST_PARAM_ID              (0x468900D6u)

#define CapSense_BUTTON9_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button9.idacMod[0u])
#define CapSense_BUTTON9_IDAC_MOD0_OFFSET                   (215u)
#define CapSense_BUTTON9_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON9_IDAC_MOD0_PARAM_ID                 (0x4D0900D7u)

#define CapSense_BUTTON9_SNS_CLK_VALUE                      (CapSense_dsRam.wdgtList.button9.snsClk)
#define CapSense_BUTTON9_SNS_CLK_OFFSET                     (216u)
#define CapSense_BUTTON9_SNS_CLK_SIZE                       (2u)
#define CapSense_BUTTON9_SNS_CLK_PARAM_ID                   (0x818900D8u)

#define CapSense_BUTTON9_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button9.snsClkSource)
#define CapSense_BUTTON9_SNS_CLK_SOURCE_OFFSET              (218u)
#define CapSense_BUTTON9_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON9_SNS_CLK_SOURCE_PARAM_ID            (0x458900DAu)

#define CapSense_BUTTON9_FINGER_CAP_VALUE                   (CapSense_dsRam.wdgtList.button9.fingerCap)
#define CapSense_BUTTON9_FINGER_CAP_OFFSET                  (220u)
#define CapSense_BUTTON9_FINGER_CAP_SIZE                    (2u)
#define CapSense_BUTTON9_FINGER_CAP_PARAM_ID                (0xA60900DCu)

#define CapSense_BUTTON9_SIGPFC_VALUE                       (CapSense_dsRam.wdgtList.button9.sigPFC)
#define CapSense_BUTTON9_SIGPFC_OFFSET                      (222u)
#define CapSense_BUTTON9_SIGPFC_SIZE                        (2u)
#define CapSense_BUTTON9_SIGPFC_PARAM_ID                    (0xAA0900DEu)

#define CapSense_BUTTON10_RESOLUTION_VALUE                  (CapSense_dsRam.wdgtList.button10.resolution)
#define CapSense_BUTTON10_RESOLUTION_OFFSET                 (224u)
#define CapSense_BUTTON10_RESOLUTION_SIZE                   (2u)
#define CapSense_BUTTON10_RESOLUTION_PARAM_ID               (0x898A00E0u)

#define CapSense_BUTTON10_FINGER_TH_VALUE                   (CapSense_dsRam.wdgtList.button10.fingerTh)
#define CapSense_BUTTON10_FINGER_TH_OFFSET                  (226u)
#define CapSense_BUTTON10_FINGER_TH_SIZE                    (2u)
#define CapSense_BUTTON10_FINGER_TH_PARAM_ID                (0x858A00E2u)

#define CapSense_BUTTON10_NOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button10.noiseTh)
#define CapSense_BUTTON10_NOISE_TH_OFFSET                   (228u)
#define CapSense_BUTTON10_NOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON10_NOISE_TH_PARAM_ID                 (0x408A00E4u)

#define CapSense_BUTTON10_NNOISE_TH_VALUE                   (CapSense_dsRam.wdgtList.button10.nNoiseTh)
#define CapSense_BUTTON10_NNOISE_TH_OFFSET                  (229u)
#define CapSense_BUTTON10_NNOISE_TH_SIZE                    (1u)
#define CapSense_BUTTON10_NNOISE_TH_PARAM_ID                (0x468A00E5u)

#define CapSense_BUTTON10_HYSTERESIS_VALUE                  (CapSense_dsRam.wdgtList.button10.hysteresis)
#define CapSense_BUTTON10_HYSTERESIS_OFFSET                 (230u)
#define CapSense_BUTTON10_HYSTERESIS_SIZE                   (1u)
#define CapSense_BUTTON10_HYSTERESIS_PARAM_ID               (0x4C8A00E6u)

#define CapSense_BUTTON10_ON_DEBOUNCE_VALUE                 (CapSense_dsRam.wdgtList.button10.onDebounce)
#define CapSense_BUTTON10_ON_DEBOUNCE_OFFSET                (231u)
#define CapSense_BUTTON10_ON_DEBOUNCE_SIZE                  (1u)
#define CapSense_BUTTON10_ON_DEBOUNCE_PARAM_ID              (0x4A8A00E7u)

#define CapSense_BUTTON10_LOW_BSLN_RST_VALUE                (CapSense_dsRam.wdgtList.button10.lowBslnRst)
#define CapSense_BUTTON10_LOW_BSLN_RST_OFFSET               (232u)
#define CapSense_BUTTON10_LOW_BSLN_RST_SIZE                 (1u)
#define CapSense_BUTTON10_LOW_BSLN_RST_PARAM_ID             (0x438A00E8u)

#define CapSense_BUTTON10_IDAC_MOD0_VALUE                   (CapSense_dsRam.wdgtList.button10.idacMod[0u])
#define CapSense_BUTTON10_IDAC_MOD0_OFFSET                  (233u)
#define CapSense_BUTTON10_IDAC_MOD0_SIZE                    (1u)
#define CapSense_BUTTON10_IDAC_MOD0_PARAM_ID                (0x480A00E9u)

#define CapSense_BUTTON10_SNS_CLK_VALUE                     (CapSense_dsRam.wdgtList.button10.snsClk)
#define CapSense_BUTTON10_SNS_CLK_OFFSET                    (234u)
#define CapSense_BUTTON10_SNS_CLK_SIZE                      (2u)
#define CapSense_BUTTON10_SNS_CLK_PARAM_ID                  (0x878A00EAu)

#define CapSense_BUTTON10_SNS_CLK_SOURCE_VALUE              (CapSense_dsRam.wdgtList.button10.snsClkSource)
#define CapSense_BUTTON10_SNS_CLK_SOURCE_OFFSET             (236u)
#define CapSense_BUTTON10_SNS_CLK_SOURCE_SIZE               (1u)
#define CapSense_BUTTON10_SNS_CLK_SOURCE_PARAM_ID           (0x428A00ECu)

#define CapSense_BUTTON10_FINGER_CAP_VALUE                  (CapSense_dsRam.wdgtList.button10.fingerCap)
#define CapSense_BUTTON10_FINGER_CAP_OFFSET                 (238u)
#define CapSense_BUTTON10_FINGER_CAP_SIZE                   (2u)
#define CapSense_BUTTON10_FINGER_CAP_PARAM_ID               (0xA00A00EEu)

#define CapSense_BUTTON10_SIGPFC_VALUE                      (CapSense_dsRam.wdgtList.button10.sigPFC)
#define CapSense_BUTTON10_SIGPFC_OFFSET                     (240u)
#define CapSense_BUTTON10_SIGPFC_SIZE                       (2u)
#define CapSense_BUTTON10_SIGPFC_PARAM_ID                   (0xAA0A00F0u)

#define CapSense_BUTTON11_RESOLUTION_VALUE                  (CapSense_dsRam.wdgtList.button11.resolution)
#define CapSense_BUTTON11_RESOLUTION_OFFSET                 (242u)
#define CapSense_BUTTON11_RESOLUTION_SIZE                   (2u)
#define CapSense_BUTTON11_RESOLUTION_PARAM_ID               (0x838B00F2u)

#define CapSense_BUTTON11_FINGER_TH_VALUE                   (CapSense_dsRam.wdgtList.button11.fingerTh)
#define CapSense_BUTTON11_FINGER_TH_OFFSET                  (244u)
#define CapSense_BUTTON11_FINGER_TH_SIZE                    (2u)
#define CapSense_BUTTON11_FINGER_TH_PARAM_ID                (0x8E8B00F4u)

#define CapSense_BUTTON11_NOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button11.noiseTh)
#define CapSense_BUTTON11_NOISE_TH_OFFSET                   (246u)
#define CapSense_BUTTON11_NOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON11_NOISE_TH_PARAM_ID                 (0x4A8B00F6u)

#define CapSense_BUTTON11_NNOISE_TH_VALUE                   (CapSense_dsRam.wdgtList.button11.nNoiseTh)
#define CapSense_BUTTON11_NNOISE_TH_OFFSET                  (247u)
#define CapSense_BUTTON11_NNOISE_TH_SIZE                    (1u)
#define CapSense_BUTTON11_NNOISE_TH_PARAM_ID                (0x4C8B00F7u)

#define CapSense_BUTTON11_HYSTERESIS_VALUE                  (CapSense_dsRam.wdgtList.button11.hysteresis)
#define CapSense_BUTTON11_HYSTERESIS_OFFSET                 (248u)
#define CapSense_BUTTON11_HYSTERESIS_SIZE                   (1u)
#define CapSense_BUTTON11_HYSTERESIS_PARAM_ID               (0x458B00F8u)

#define CapSense_BUTTON11_ON_DEBOUNCE_VALUE                 (CapSense_dsRam.wdgtList.button11.onDebounce)
#define CapSense_BUTTON11_ON_DEBOUNCE_OFFSET                (249u)
#define CapSense_BUTTON11_ON_DEBOUNCE_SIZE                  (1u)
#define CapSense_BUTTON11_ON_DEBOUNCE_PARAM_ID              (0x438B00F9u)

#define CapSense_BUTTON11_LOW_BSLN_RST_VALUE                (CapSense_dsRam.wdgtList.button11.lowBslnRst)
#define CapSense_BUTTON11_LOW_BSLN_RST_OFFSET               (250u)
#define CapSense_BUTTON11_LOW_BSLN_RST_SIZE                 (1u)
#define CapSense_BUTTON11_LOW_BSLN_RST_PARAM_ID             (0x498B00FAu)

#define CapSense_BUTTON11_IDAC_MOD0_VALUE                   (CapSense_dsRam.wdgtList.button11.idacMod[0u])
#define CapSense_BUTTON11_IDAC_MOD0_OFFSET                  (251u)
#define CapSense_BUTTON11_IDAC_MOD0_SIZE                    (1u)
#define CapSense_BUTTON11_IDAC_MOD0_PARAM_ID                (0x420B00FBu)

#define CapSense_BUTTON11_SNS_CLK_VALUE                     (CapSense_dsRam.wdgtList.button11.snsClk)
#define CapSense_BUTTON11_SNS_CLK_OFFSET                    (252u)
#define CapSense_BUTTON11_SNS_CLK_SIZE                      (2u)
#define CapSense_BUTTON11_SNS_CLK_PARAM_ID                  (0x8C8B00FCu)

#define CapSense_BUTTON11_SNS_CLK_SOURCE_VALUE              (CapSense_dsRam.wdgtList.button11.snsClkSource)
#define CapSense_BUTTON11_SNS_CLK_SOURCE_OFFSET             (254u)
#define CapSense_BUTTON11_SNS_CLK_SOURCE_SIZE               (1u)
#define CapSense_BUTTON11_SNS_CLK_SOURCE_PARAM_ID           (0x488B00FEu)

#define CapSense_BUTTON11_FINGER_CAP_VALUE                  (CapSense_dsRam.wdgtList.button11.fingerCap)
#define CapSense_BUTTON11_FINGER_CAP_OFFSET                 (256u)
#define CapSense_BUTTON11_FINGER_CAP_SIZE                   (2u)
#define CapSense_BUTTON11_FINGER_CAP_PARAM_ID               (0xA30B0100u)

#define CapSense_BUTTON11_SIGPFC_VALUE                      (CapSense_dsRam.wdgtList.button11.sigPFC)
#define CapSense_BUTTON11_SIGPFC_OFFSET                     (258u)
#define CapSense_BUTTON11_SIGPFC_SIZE                       (2u)
#define CapSense_BUTTON11_SIGPFC_PARAM_ID                   (0xAF0B0102u)

#define CapSense_BUTTON12_RESOLUTION_VALUE                  (CapSense_dsRam.wdgtList.button12.resolution)
#define CapSense_BUTTON12_RESOLUTION_OFFSET                 (260u)
#define CapSense_BUTTON12_RESOLUTION_SIZE                   (2u)
#define CapSense_BUTTON12_RESOLUTION_PARAM_ID               (0x8D8C0104u)

#define CapSense_BUTTON12_FINGER_TH_VALUE                   (CapSense_dsRam.wdgtList.button12.fingerTh)
#define CapSense_BUTTON12_FINGER_TH_OFFSET                  (262u)
#define CapSense_BUTTON12_FINGER_TH_SIZE                    (2u)
#define CapSense_BUTTON12_FINGER_TH_PARAM_ID                (0x818C0106u)

#define CapSense_BUTTON12_NOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button12.noiseTh)
#define CapSense_BUTTON12_NOISE_TH_OFFSET                   (264u)
#define CapSense_BUTTON12_NOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON12_NOISE_TH_PARAM_ID                 (0x468C0108u)

#define CapSense_BUTTON12_NNOISE_TH_VALUE                   (CapSense_dsRam.wdgtList.button12.nNoiseTh)
#define CapSense_BUTTON12_NNOISE_TH_OFFSET                  (265u)
#define CapSense_BUTTON12_NNOISE_TH_SIZE                    (1u)
#define CapSense_BUTTON12_NNOISE_TH_PARAM_ID                (0x408C0109u)

#define CapSense_BUTTON12_HYSTERESIS_VALUE                  (CapSense_dsRam.wdgtList.button12.hysteresis)
#define CapSense_BUTTON12_HYSTERESIS_OFFSET                 (266u)
#define CapSense_BUTTON12_HYSTERESIS_SIZE                   (1u)
#define CapSense_BUTTON12_HYSTERESIS_PARAM_ID               (0x4A8C010Au)

#define CapSense_BUTTON12_ON_DEBOUNCE_VALUE                 (CapSense_dsRam.wdgtList.button12.onDebounce)
#define CapSense_BUTTON12_ON_DEBOUNCE_OFFSET                (267u)
#define CapSense_BUTTON12_ON_DEBOUNCE_SIZE                  (1u)
#define CapSense_BUTTON12_ON_DEBOUNCE_PARAM_ID              (0x4C8C010Bu)

#define CapSense_BUTTON12_LOW_BSLN_RST_VALUE                (CapSense_dsRam.wdgtList.button12.lowBslnRst)
#define CapSense_BUTTON12_LOW_BSLN_RST_OFFSET               (268u)
#define CapSense_BUTTON12_LOW_BSLN_RST_SIZE                 (1u)
#define CapSense_BUTTON12_LOW_BSLN_RST_PARAM_ID             (0x478C010Cu)

#define CapSense_BUTTON12_IDAC_MOD0_VALUE                   (CapSense_dsRam.wdgtList.button12.idacMod[0u])
#define CapSense_BUTTON12_IDAC_MOD0_OFFSET                  (269u)
#define CapSense_BUTTON12_IDAC_MOD0_SIZE                    (1u)
#define CapSense_BUTTON12_IDAC_MOD0_PARAM_ID                (0x4C0C010Du)

#define CapSense_BUTTON12_SNS_CLK_VALUE                     (CapSense_dsRam.wdgtList.button12.snsClk)
#define CapSense_BUTTON12_SNS_CLK_OFFSET                    (270u)
#define CapSense_BUTTON12_SNS_CLK_SIZE                      (2u)
#define CapSense_BUTTON12_SNS_CLK_PARAM_ID                  (0x838C010Eu)

#define CapSense_BUTTON12_SNS_CLK_SOURCE_VALUE              (CapSense_dsRam.wdgtList.button12.snsClkSource)
#define CapSense_BUTTON12_SNS_CLK_SOURCE_OFFSET             (272u)
#define CapSense_BUTTON12_SNS_CLK_SOURCE_SIZE               (1u)
#define CapSense_BUTTON12_SNS_CLK_SOURCE_PARAM_ID           (0x418C0110u)

#define CapSense_BUTTON12_FINGER_CAP_VALUE                  (CapSense_dsRam.wdgtList.button12.fingerCap)
#define CapSense_BUTTON12_FINGER_CAP_OFFSET                 (274u)
#define CapSense_BUTTON12_FINGER_CAP_SIZE                   (2u)
#define CapSense_BUTTON12_FINGER_CAP_PARAM_ID               (0xA30C0112u)

#define CapSense_BUTTON12_SIGPFC_VALUE                      (CapSense_dsRam.wdgtList.button12.sigPFC)
#define CapSense_BUTTON12_SIGPFC_OFFSET                     (276u)
#define CapSense_BUTTON12_SIGPFC_SIZE                       (2u)
#define CapSense_BUTTON12_SIGPFC_PARAM_ID                   (0xAE0C0114u)

#define CapSense_BUTTON13_RESOLUTION_VALUE                  (CapSense_dsRam.wdgtList.button13.resolution)
#define CapSense_BUTTON13_RESOLUTION_OFFSET                 (278u)
#define CapSense_BUTTON13_RESOLUTION_SIZE                   (2u)
#define CapSense_BUTTON13_RESOLUTION_PARAM_ID               (0x878D0116u)

#define CapSense_BUTTON13_FINGER_TH_VALUE                   (CapSense_dsRam.wdgtList.button13.fingerTh)
#define CapSense_BUTTON13_FINGER_TH_OFFSET                  (280u)
#define CapSense_BUTTON13_FINGER_TH_SIZE                    (2u)
#define CapSense_BUTTON13_FINGER_TH_PARAM_ID                (0x888D0118u)

#define CapSense_BUTTON13_NOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button13.noiseTh)
#define CapSense_BUTTON13_NOISE_TH_OFFSET                   (282u)
#define CapSense_BUTTON13_NOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON13_NOISE_TH_PARAM_ID                 (0x4C8D011Au)

#define CapSense_BUTTON13_NNOISE_TH_VALUE                   (CapSense_dsRam.wdgtList.button13.nNoiseTh)
#define CapSense_BUTTON13_NNOISE_TH_OFFSET                  (283u)
#define CapSense_BUTTON13_NNOISE_TH_SIZE                    (1u)
#define CapSense_BUTTON13_NNOISE_TH_PARAM_ID                (0x4A8D011Bu)

#define CapSense_BUTTON13_HYSTERESIS_VALUE                  (CapSense_dsRam.wdgtList.button13.hysteresis)
#define CapSense_BUTTON13_HYSTERESIS_OFFSET                 (284u)
#define CapSense_BUTTON13_HYSTERESIS_SIZE                   (1u)
#define CapSense_BUTTON13_HYSTERESIS_PARAM_ID               (0x418D011Cu)

#define CapSense_BUTTON13_ON_DEBOUNCE_VALUE                 (CapSense_dsRam.wdgtList.button13.onDebounce)
#define CapSense_BUTTON13_ON_DEBOUNCE_OFFSET                (285u)
#define CapSense_BUTTON13_ON_DEBOUNCE_SIZE                  (1u)
#define CapSense_BUTTON13_ON_DEBOUNCE_PARAM_ID              (0x478D011Du)

#define CapSense_BUTTON13_LOW_BSLN_RST_VALUE                (CapSense_dsRam.wdgtList.button13.lowBslnRst)
#define CapSense_BUTTON13_LOW_BSLN_RST_OFFSET               (286u)
#define CapSense_BUTTON13_LOW_BSLN_RST_SIZE                 (1u)
#define CapSense_BUTTON13_LOW_BSLN_RST_PARAM_ID             (0x4D8D011Eu)

#define CapSense_BUTTON13_IDAC_MOD0_VALUE                   (CapSense_dsRam.wdgtList.button13.idacMod[0u])
#define CapSense_BUTTON13_IDAC_MOD0_OFFSET                  (287u)
#define CapSense_BUTTON13_IDAC_MOD0_SIZE                    (1u)
#define CapSense_BUTTON13_IDAC_MOD0_PARAM_ID                (0x460D011Fu)

#define CapSense_BUTTON13_SNS_CLK_VALUE                     (CapSense_dsRam.wdgtList.button13.snsClk)
#define CapSense_BUTTON13_SNS_CLK_OFFSET                    (288u)
#define CapSense_BUTTON13_SNS_CLK_SIZE                      (2u)
#define CapSense_BUTTON13_SNS_CLK_PARAM_ID                  (0x858D0120u)

#define CapSense_BUTTON13_SNS_CLK_SOURCE_VALUE              (CapSense_dsRam.wdgtList.button13.snsClkSource)
#define CapSense_BUTTON13_SNS_CLK_SOURCE_OFFSET             (290u)
#define CapSense_BUTTON13_SNS_CLK_SOURCE_SIZE               (1u)
#define CapSense_BUTTON13_SNS_CLK_SOURCE_PARAM_ID           (0x418D0122u)

#define CapSense_BUTTON13_FINGER_CAP_VALUE                  (CapSense_dsRam.wdgtList.button13.fingerCap)
#define CapSense_BUTTON13_FINGER_CAP_OFFSET                 (292u)
#define CapSense_BUTTON13_FINGER_CAP_SIZE                   (2u)
#define CapSense_BUTTON13_FINGER_CAP_PARAM_ID               (0xA20D0124u)

#define CapSense_BUTTON13_SIGPFC_VALUE                      (CapSense_dsRam.wdgtList.button13.sigPFC)
#define CapSense_BUTTON13_SIGPFC_OFFSET                     (294u)
#define CapSense_BUTTON13_SIGPFC_SIZE                       (2u)
#define CapSense_BUTTON13_SIGPFC_PARAM_ID                   (0xAE0D0126u)

#define CapSense_BUTTON14_RESOLUTION_VALUE                  (CapSense_dsRam.wdgtList.button14.resolution)
#define CapSense_BUTTON14_RESOLUTION_OFFSET                 (296u)
#define CapSense_BUTTON14_RESOLUTION_SIZE                   (2u)
#define CapSense_BUTTON14_RESOLUTION_PARAM_ID               (0x828E0128u)

#define CapSense_BUTTON14_FINGER_TH_VALUE                   (CapSense_dsRam.wdgtList.button14.fingerTh)
#define CapSense_BUTTON14_FINGER_TH_OFFSET                  (298u)
#define CapSense_BUTTON14_FINGER_TH_SIZE                    (2u)
#define CapSense_BUTTON14_FINGER_TH_PARAM_ID                (0x8E8E012Au)

#define CapSense_BUTTON14_NOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button14.noiseTh)
#define CapSense_BUTTON14_NOISE_TH_OFFSET                   (300u)
#define CapSense_BUTTON14_NOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON14_NOISE_TH_PARAM_ID                 (0x4B8E012Cu)

#define CapSense_BUTTON14_NNOISE_TH_VALUE                   (CapSense_dsRam.wdgtList.button14.nNoiseTh)
#define CapSense_BUTTON14_NNOISE_TH_OFFSET                  (301u)
#define CapSense_BUTTON14_NNOISE_TH_SIZE                    (1u)
#define CapSense_BUTTON14_NNOISE_TH_PARAM_ID                (0x4D8E012Du)

#define CapSense_BUTTON14_HYSTERESIS_VALUE                  (CapSense_dsRam.wdgtList.button14.hysteresis)
#define CapSense_BUTTON14_HYSTERESIS_OFFSET                 (302u)
#define CapSense_BUTTON14_HYSTERESIS_SIZE                   (1u)
#define CapSense_BUTTON14_HYSTERESIS_PARAM_ID               (0x478E012Eu)

#define CapSense_BUTTON14_ON_DEBOUNCE_VALUE                 (CapSense_dsRam.wdgtList.button14.onDebounce)
#define CapSense_BUTTON14_ON_DEBOUNCE_OFFSET                (303u)
#define CapSense_BUTTON14_ON_DEBOUNCE_SIZE                  (1u)
#define CapSense_BUTTON14_ON_DEBOUNCE_PARAM_ID              (0x418E012Fu)

#define CapSense_BUTTON14_LOW_BSLN_RST_VALUE                (CapSense_dsRam.wdgtList.button14.lowBslnRst)
#define CapSense_BUTTON14_LOW_BSLN_RST_OFFSET               (304u)
#define CapSense_BUTTON14_LOW_BSLN_RST_SIZE                 (1u)
#define CapSense_BUTTON14_LOW_BSLN_RST_PARAM_ID             (0x4D8E0130u)

#define CapSense_BUTTON14_IDAC_MOD0_VALUE                   (CapSense_dsRam.wdgtList.button14.idacMod[0u])
#define CapSense_BUTTON14_IDAC_MOD0_OFFSET                  (305u)
#define CapSense_BUTTON14_IDAC_MOD0_SIZE                    (1u)
#define CapSense_BUTTON14_IDAC_MOD0_PARAM_ID                (0x460E0131u)

#define CapSense_BUTTON14_SNS_CLK_VALUE                     (CapSense_dsRam.wdgtList.button14.snsClk)
#define CapSense_BUTTON14_SNS_CLK_OFFSET                    (306u)
#define CapSense_BUTTON14_SNS_CLK_SIZE                      (2u)
#define CapSense_BUTTON14_SNS_CLK_PARAM_ID                  (0x898E0132u)

#define CapSense_BUTTON14_SNS_CLK_SOURCE_VALUE              (CapSense_dsRam.wdgtList.button14.snsClkSource)
#define CapSense_BUTTON14_SNS_CLK_SOURCE_OFFSET             (308u)
#define CapSense_BUTTON14_SNS_CLK_SOURCE_SIZE               (1u)
#define CapSense_BUTTON14_SNS_CLK_SOURCE_PARAM_ID           (0x4C8E0134u)

#define CapSense_BUTTON14_FINGER_CAP_VALUE                  (CapSense_dsRam.wdgtList.button14.fingerCap)
#define CapSense_BUTTON14_FINGER_CAP_OFFSET                 (310u)
#define CapSense_BUTTON14_FINGER_CAP_SIZE                   (2u)
#define CapSense_BUTTON14_FINGER_CAP_PARAM_ID               (0xAE0E0136u)

#define CapSense_BUTTON14_SIGPFC_VALUE                      (CapSense_dsRam.wdgtList.button14.sigPFC)
#define CapSense_BUTTON14_SIGPFC_OFFSET                     (312u)
#define CapSense_BUTTON14_SIGPFC_SIZE                       (2u)
#define CapSense_BUTTON14_SIGPFC_PARAM_ID                   (0xA10E0138u)

#define CapSense_BUTTON0_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button0[0u].raw[0u])
#define CapSense_BUTTON0_SNS0_RAW0_OFFSET                   (314u)
#define CapSense_BUTTON0_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON0_SNS0_RAW0_PARAM_ID                 (0x8D00013Au)

#define CapSense_BUTTON0_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button0[0u].bsln[0u])
#define CapSense_BUTTON0_SNS0_BSLN0_OFFSET                  (316u)
#define CapSense_BUTTON0_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON0_SNS0_BSLN0_PARAM_ID                (0x8000013Cu)

#define CapSense_BUTTON0_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button0[0u].bslnExt[0u])
#define CapSense_BUTTON0_SNS0_BSLN_EXT0_OFFSET              (318u)
#define CapSense_BUTTON0_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON0_SNS0_BSLN_EXT0_PARAM_ID            (0x4400013Eu)

#define CapSense_BUTTON0_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button0[0u].diff)
#define CapSense_BUTTON0_SNS0_DIFF_OFFSET                   (320u)
#define CapSense_BUTTON0_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON0_SNS0_DIFF_PARAM_ID                 (0x81000140u)

#define CapSense_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button0[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (322u)
#define CapSense_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x45000142u)

#define CapSense_BUTTON0_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button0[0u].idacComp[0u])
#define CapSense_BUTTON0_SNS0_IDAC_COMP0_OFFSET             (323u)
#define CapSense_BUTTON0_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON0_SNS0_IDAC_COMP0_PARAM_ID           (0x43000143u)

#define CapSense_BUTTON1_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button1[0u].raw[0u])
#define CapSense_BUTTON1_SNS0_RAW0_OFFSET                   (324u)
#define CapSense_BUTTON1_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON1_SNS0_RAW0_PARAM_ID                 (0x80000144u)

#define CapSense_BUTTON1_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button1[0u].bsln[0u])
#define CapSense_BUTTON1_SNS0_BSLN0_OFFSET                  (326u)
#define CapSense_BUTTON1_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON1_SNS0_BSLN0_PARAM_ID                (0x8C000146u)

#define CapSense_BUTTON1_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button1[0u].bslnExt[0u])
#define CapSense_BUTTON1_SNS0_BSLN_EXT0_OFFSET              (328u)
#define CapSense_BUTTON1_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON1_SNS0_BSLN_EXT0_PARAM_ID            (0x4B000148u)

#define CapSense_BUTTON1_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button1[0u].diff)
#define CapSense_BUTTON1_SNS0_DIFF_OFFSET                   (330u)
#define CapSense_BUTTON1_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON1_SNS0_DIFF_PARAM_ID                 (0x8F00014Au)

#define CapSense_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button1[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (332u)
#define CapSense_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4A00014Cu)

#define CapSense_BUTTON1_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button1[0u].idacComp[0u])
#define CapSense_BUTTON1_SNS0_IDAC_COMP0_OFFSET             (333u)
#define CapSense_BUTTON1_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON1_SNS0_IDAC_COMP0_PARAM_ID           (0x4C00014Du)

#define CapSense_BUTTON2_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button2[0u].raw[0u])
#define CapSense_BUTTON2_SNS0_RAW0_OFFSET                   (334u)
#define CapSense_BUTTON2_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON2_SNS0_RAW0_PARAM_ID                 (0x8E00014Eu)

#define CapSense_BUTTON2_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button2[0u].bsln[0u])
#define CapSense_BUTTON2_SNS0_BSLN0_OFFSET                  (336u)
#define CapSense_BUTTON2_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON2_SNS0_BSLN0_PARAM_ID                (0x84000150u)

#define CapSense_BUTTON2_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button2[0u].bslnExt[0u])
#define CapSense_BUTTON2_SNS0_BSLN_EXT0_OFFSET              (338u)
#define CapSense_BUTTON2_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON2_SNS0_BSLN_EXT0_PARAM_ID            (0x40000152u)

#define CapSense_BUTTON2_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button2[0u].diff)
#define CapSense_BUTTON2_SNS0_DIFF_OFFSET                   (340u)
#define CapSense_BUTTON2_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON2_SNS0_DIFF_PARAM_ID                 (0x85000154u)

#define CapSense_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button2[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (342u)
#define CapSense_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x41000156u)

#define CapSense_BUTTON2_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button2[0u].idacComp[0u])
#define CapSense_BUTTON2_SNS0_IDAC_COMP0_OFFSET             (343u)
#define CapSense_BUTTON2_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON2_SNS0_IDAC_COMP0_PARAM_ID           (0x47000157u)

#define CapSense_BUTTON3_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button3[0u].raw[0u])
#define CapSense_BUTTON3_SNS0_RAW0_OFFSET                   (344u)
#define CapSense_BUTTON3_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON3_SNS0_RAW0_PARAM_ID                 (0x86000158u)

#define CapSense_BUTTON3_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button3[0u].bsln[0u])
#define CapSense_BUTTON3_SNS0_BSLN0_OFFSET                  (346u)
#define CapSense_BUTTON3_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON3_SNS0_BSLN0_PARAM_ID                (0x8A00015Au)

#define CapSense_BUTTON3_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button3[0u].bslnExt[0u])
#define CapSense_BUTTON3_SNS0_BSLN_EXT0_OFFSET              (348u)
#define CapSense_BUTTON3_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON3_SNS0_BSLN_EXT0_PARAM_ID            (0x4F00015Cu)

#define CapSense_BUTTON3_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button3[0u].diff)
#define CapSense_BUTTON3_SNS0_DIFF_OFFSET                   (350u)
#define CapSense_BUTTON3_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON3_SNS0_DIFF_PARAM_ID                 (0x8B00015Eu)

#define CapSense_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button3[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (352u)
#define CapSense_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x43000160u)

#define CapSense_BUTTON3_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button3[0u].idacComp[0u])
#define CapSense_BUTTON3_SNS0_IDAC_COMP0_OFFSET             (353u)
#define CapSense_BUTTON3_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON3_SNS0_IDAC_COMP0_PARAM_ID           (0x45000161u)

#define CapSense_BUTTON4_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button4[0u].raw[0u])
#define CapSense_BUTTON4_SNS0_RAW0_OFFSET                   (354u)
#define CapSense_BUTTON4_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON4_SNS0_RAW0_PARAM_ID                 (0x87000162u)

#define CapSense_BUTTON4_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button4[0u].bsln[0u])
#define CapSense_BUTTON4_SNS0_BSLN0_OFFSET                  (356u)
#define CapSense_BUTTON4_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON4_SNS0_BSLN0_PARAM_ID                (0x8A000164u)

#define CapSense_BUTTON4_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button4[0u].bslnExt[0u])
#define CapSense_BUTTON4_SNS0_BSLN_EXT0_OFFSET              (358u)
#define CapSense_BUTTON4_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON4_SNS0_BSLN_EXT0_PARAM_ID            (0x4E000166u)

#define CapSense_BUTTON4_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button4[0u].diff)
#define CapSense_BUTTON4_SNS0_DIFF_OFFSET                   (360u)
#define CapSense_BUTTON4_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON4_SNS0_DIFF_PARAM_ID                 (0x89000168u)

#define CapSense_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button4[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (362u)
#define CapSense_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4D00016Au)

#define CapSense_BUTTON4_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button4[0u].idacComp[0u])
#define CapSense_BUTTON4_SNS0_IDAC_COMP0_OFFSET             (363u)
#define CapSense_BUTTON4_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON4_SNS0_IDAC_COMP0_PARAM_ID           (0x4B00016Bu)

#define CapSense_BUTTON5_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button5[0u].raw[0u])
#define CapSense_BUTTON5_SNS0_RAW0_OFFSET                   (364u)
#define CapSense_BUTTON5_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON5_SNS0_RAW0_PARAM_ID                 (0x8800016Cu)

#define CapSense_BUTTON5_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button5[0u].bsln[0u])
#define CapSense_BUTTON5_SNS0_BSLN0_OFFSET                  (366u)
#define CapSense_BUTTON5_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON5_SNS0_BSLN0_PARAM_ID                (0x8400016Eu)

#define CapSense_BUTTON5_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button5[0u].bslnExt[0u])
#define CapSense_BUTTON5_SNS0_BSLN_EXT0_OFFSET              (368u)
#define CapSense_BUTTON5_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON5_SNS0_BSLN_EXT0_PARAM_ID            (0x46000170u)

#define CapSense_BUTTON5_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button5[0u].diff)
#define CapSense_BUTTON5_SNS0_DIFF_OFFSET                   (370u)
#define CapSense_BUTTON5_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON5_SNS0_DIFF_PARAM_ID                 (0x82000172u)

#define CapSense_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button5[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (372u)
#define CapSense_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x47000174u)

#define CapSense_BUTTON5_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button5[0u].idacComp[0u])
#define CapSense_BUTTON5_SNS0_IDAC_COMP0_OFFSET             (373u)
#define CapSense_BUTTON5_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON5_SNS0_IDAC_COMP0_PARAM_ID           (0x41000175u)

#define CapSense_BUTTON6_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button6[0u].raw[0u])
#define CapSense_BUTTON6_SNS0_RAW0_OFFSET                   (374u)
#define CapSense_BUTTON6_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON6_SNS0_RAW0_PARAM_ID                 (0x83000176u)

#define CapSense_BUTTON6_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button6[0u].bsln[0u])
#define CapSense_BUTTON6_SNS0_BSLN0_OFFSET                  (376u)
#define CapSense_BUTTON6_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON6_SNS0_BSLN0_PARAM_ID                (0x8C000178u)

#define CapSense_BUTTON6_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button6[0u].bslnExt[0u])
#define CapSense_BUTTON6_SNS0_BSLN_EXT0_OFFSET              (378u)
#define CapSense_BUTTON6_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON6_SNS0_BSLN_EXT0_PARAM_ID            (0x4800017Au)

#define CapSense_BUTTON6_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button6[0u].diff)
#define CapSense_BUTTON6_SNS0_DIFF_OFFSET                   (380u)
#define CapSense_BUTTON6_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON6_SNS0_DIFF_PARAM_ID                 (0x8D00017Cu)

#define CapSense_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button6[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (382u)
#define CapSense_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4900017Eu)

#define CapSense_BUTTON6_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button6[0u].idacComp[0u])
#define CapSense_BUTTON6_SNS0_IDAC_COMP0_OFFSET             (383u)
#define CapSense_BUTTON6_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON6_SNS0_IDAC_COMP0_PARAM_ID           (0x4F00017Fu)

#define CapSense_BUTTON7_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button7[0u].raw[0u])
#define CapSense_BUTTON7_SNS0_RAW0_OFFSET                   (384u)
#define CapSense_BUTTON7_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON7_SNS0_RAW0_PARAM_ID                 (0x8F000180u)

#define CapSense_BUTTON7_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button7[0u].bsln[0u])
#define CapSense_BUTTON7_SNS0_BSLN0_OFFSET                  (386u)
#define CapSense_BUTTON7_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON7_SNS0_BSLN0_PARAM_ID                (0x83000182u)

#define CapSense_BUTTON7_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button7[0u].bslnExt[0u])
#define CapSense_BUTTON7_SNS0_BSLN_EXT0_OFFSET              (388u)
#define CapSense_BUTTON7_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON7_SNS0_BSLN_EXT0_PARAM_ID            (0x46000184u)

#define CapSense_BUTTON7_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button7[0u].diff)
#define CapSense_BUTTON7_SNS0_DIFF_OFFSET                   (390u)
#define CapSense_BUTTON7_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON7_SNS0_DIFF_PARAM_ID                 (0x82000186u)

#define CapSense_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button7[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (392u)
#define CapSense_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x45000188u)

#define CapSense_BUTTON7_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button7[0u].idacComp[0u])
#define CapSense_BUTTON7_SNS0_IDAC_COMP0_OFFSET             (393u)
#define CapSense_BUTTON7_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON7_SNS0_IDAC_COMP0_PARAM_ID           (0x43000189u)

#define CapSense_BUTTON8_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button8[0u].raw[0u])
#define CapSense_BUTTON8_SNS0_RAW0_OFFSET                   (394u)
#define CapSense_BUTTON8_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON8_SNS0_RAW0_PARAM_ID                 (0x8100018Au)

#define CapSense_BUTTON8_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button8[0u].bsln[0u])
#define CapSense_BUTTON8_SNS0_BSLN0_OFFSET                  (396u)
#define CapSense_BUTTON8_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON8_SNS0_BSLN0_PARAM_ID                (0x8C00018Cu)

#define CapSense_BUTTON8_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button8[0u].bslnExt[0u])
#define CapSense_BUTTON8_SNS0_BSLN_EXT0_OFFSET              (398u)
#define CapSense_BUTTON8_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON8_SNS0_BSLN_EXT0_PARAM_ID            (0x4800018Eu)

#define CapSense_BUTTON8_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button8[0u].diff)
#define CapSense_BUTTON8_SNS0_DIFF_OFFSET                   (400u)
#define CapSense_BUTTON8_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON8_SNS0_DIFF_PARAM_ID                 (0x8A000190u)

#define CapSense_BUTTON8_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button8[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON8_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (402u)
#define CapSense_BUTTON8_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON8_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4E000192u)

#define CapSense_BUTTON8_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button8[0u].idacComp[0u])
#define CapSense_BUTTON8_SNS0_IDAC_COMP0_OFFSET             (403u)
#define CapSense_BUTTON8_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON8_SNS0_IDAC_COMP0_PARAM_ID           (0x48000193u)

#define CapSense_BUTTON9_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button9[0u].raw[0u])
#define CapSense_BUTTON9_SNS0_RAW0_OFFSET                   (404u)
#define CapSense_BUTTON9_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON9_SNS0_RAW0_PARAM_ID                 (0x8B000194u)

#define CapSense_BUTTON9_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button9[0u].bsln[0u])
#define CapSense_BUTTON9_SNS0_BSLN0_OFFSET                  (406u)
#define CapSense_BUTTON9_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON9_SNS0_BSLN0_PARAM_ID                (0x87000196u)

#define CapSense_BUTTON9_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button9[0u].bslnExt[0u])
#define CapSense_BUTTON9_SNS0_BSLN_EXT0_OFFSET              (408u)
#define CapSense_BUTTON9_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON9_SNS0_BSLN_EXT0_PARAM_ID            (0x40000198u)

#define CapSense_BUTTON9_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button9[0u].diff)
#define CapSense_BUTTON9_SNS0_DIFF_OFFSET                   (410u)
#define CapSense_BUTTON9_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON9_SNS0_DIFF_PARAM_ID                 (0x8400019Au)

#define CapSense_BUTTON9_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button9[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON9_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (412u)
#define CapSense_BUTTON9_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON9_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4100019Cu)

#define CapSense_BUTTON9_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button9[0u].idacComp[0u])
#define CapSense_BUTTON9_SNS0_IDAC_COMP0_OFFSET             (413u)
#define CapSense_BUTTON9_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON9_SNS0_IDAC_COMP0_PARAM_ID           (0x4700019Du)

#define CapSense_BUTTON10_SNS0_RAW0_VALUE                   (CapSense_dsRam.snsList.button10[0u].raw[0u])
#define CapSense_BUTTON10_SNS0_RAW0_OFFSET                  (414u)
#define CapSense_BUTTON10_SNS0_RAW0_SIZE                    (2u)
#define CapSense_BUTTON10_SNS0_RAW0_PARAM_ID                (0x8500019Eu)

#define CapSense_BUTTON10_SNS0_BSLN0_VALUE                  (CapSense_dsRam.snsList.button10[0u].bsln[0u])
#define CapSense_BUTTON10_SNS0_BSLN0_OFFSET                 (416u)
#define CapSense_BUTTON10_SNS0_BSLN0_SIZE                   (2u)
#define CapSense_BUTTON10_SNS0_BSLN0_PARAM_ID               (0x850001A0u)

#define CapSense_BUTTON10_SNS0_BSLN_EXT0_VALUE              (CapSense_dsRam.snsList.button10[0u].bslnExt[0u])
#define CapSense_BUTTON10_SNS0_BSLN_EXT0_OFFSET             (418u)
#define CapSense_BUTTON10_SNS0_BSLN_EXT0_SIZE               (1u)
#define CapSense_BUTTON10_SNS0_BSLN_EXT0_PARAM_ID           (0x410001A2u)

#define CapSense_BUTTON10_SNS0_DIFF_VALUE                   (CapSense_dsRam.snsList.button10[0u].diff)
#define CapSense_BUTTON10_SNS0_DIFF_OFFSET                  (420u)
#define CapSense_BUTTON10_SNS0_DIFF_SIZE                    (2u)
#define CapSense_BUTTON10_SNS0_DIFF_PARAM_ID                (0x840001A4u)

#define CapSense_BUTTON10_SNS0_NEG_BSLN_RST_CNT0_VALUE      (CapSense_dsRam.snsList.button10[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON10_SNS0_NEG_BSLN_RST_CNT0_OFFSET     (422u)
#define CapSense_BUTTON10_SNS0_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_BUTTON10_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID   (0x400001A6u)

#define CapSense_BUTTON10_SNS0_IDAC_COMP0_VALUE             (CapSense_dsRam.snsList.button10[0u].idacComp[0u])
#define CapSense_BUTTON10_SNS0_IDAC_COMP0_OFFSET            (423u)
#define CapSense_BUTTON10_SNS0_IDAC_COMP0_SIZE              (1u)
#define CapSense_BUTTON10_SNS0_IDAC_COMP0_PARAM_ID          (0x460001A7u)

#define CapSense_BUTTON11_SNS0_RAW0_VALUE                   (CapSense_dsRam.snsList.button11[0u].raw[0u])
#define CapSense_BUTTON11_SNS0_RAW0_OFFSET                  (424u)
#define CapSense_BUTTON11_SNS0_RAW0_SIZE                    (2u)
#define CapSense_BUTTON11_SNS0_RAW0_PARAM_ID                (0x870001A8u)

#define CapSense_BUTTON11_SNS0_BSLN0_VALUE                  (CapSense_dsRam.snsList.button11[0u].bsln[0u])
#define CapSense_BUTTON11_SNS0_BSLN0_OFFSET                 (426u)
#define CapSense_BUTTON11_SNS0_BSLN0_SIZE                   (2u)
#define CapSense_BUTTON11_SNS0_BSLN0_PARAM_ID               (0x8B0001AAu)

#define CapSense_BUTTON11_SNS0_BSLN_EXT0_VALUE              (CapSense_dsRam.snsList.button11[0u].bslnExt[0u])
#define CapSense_BUTTON11_SNS0_BSLN_EXT0_OFFSET             (428u)
#define CapSense_BUTTON11_SNS0_BSLN_EXT0_SIZE               (1u)
#define CapSense_BUTTON11_SNS0_BSLN_EXT0_PARAM_ID           (0x4E0001ACu)

#define CapSense_BUTTON11_SNS0_DIFF_VALUE                   (CapSense_dsRam.snsList.button11[0u].diff)
#define CapSense_BUTTON11_SNS0_DIFF_OFFSET                  (430u)
#define CapSense_BUTTON11_SNS0_DIFF_SIZE                    (2u)
#define CapSense_BUTTON11_SNS0_DIFF_PARAM_ID                (0x8A0001AEu)

#define CapSense_BUTTON11_SNS0_NEG_BSLN_RST_CNT0_VALUE      (CapSense_dsRam.snsList.button11[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON11_SNS0_NEG_BSLN_RST_CNT0_OFFSET     (432u)
#define CapSense_BUTTON11_SNS0_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_BUTTON11_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID   (0x480001B0u)

#define CapSense_BUTTON11_SNS0_IDAC_COMP0_VALUE             (CapSense_dsRam.snsList.button11[0u].idacComp[0u])
#define CapSense_BUTTON11_SNS0_IDAC_COMP0_OFFSET            (433u)
#define CapSense_BUTTON11_SNS0_IDAC_COMP0_SIZE              (1u)
#define CapSense_BUTTON11_SNS0_IDAC_COMP0_PARAM_ID          (0x4E0001B1u)

#define CapSense_BUTTON12_SNS0_RAW0_VALUE                   (CapSense_dsRam.snsList.button12[0u].raw[0u])
#define CapSense_BUTTON12_SNS0_RAW0_OFFSET                  (434u)
#define CapSense_BUTTON12_SNS0_RAW0_SIZE                    (2u)
#define CapSense_BUTTON12_SNS0_RAW0_PARAM_ID                (0x8C0001B2u)

#define CapSense_BUTTON12_SNS0_BSLN0_VALUE                  (CapSense_dsRam.snsList.button12[0u].bsln[0u])
#define CapSense_BUTTON12_SNS0_BSLN0_OFFSET                 (436u)
#define CapSense_BUTTON12_SNS0_BSLN0_SIZE                   (2u)
#define CapSense_BUTTON12_SNS0_BSLN0_PARAM_ID               (0x810001B4u)

#define CapSense_BUTTON12_SNS0_BSLN_EXT0_VALUE              (CapSense_dsRam.snsList.button12[0u].bslnExt[0u])
#define CapSense_BUTTON12_SNS0_BSLN_EXT0_OFFSET             (438u)
#define CapSense_BUTTON12_SNS0_BSLN_EXT0_SIZE               (1u)
#define CapSense_BUTTON12_SNS0_BSLN_EXT0_PARAM_ID           (0x450001B6u)

#define CapSense_BUTTON12_SNS0_DIFF_VALUE                   (CapSense_dsRam.snsList.button12[0u].diff)
#define CapSense_BUTTON12_SNS0_DIFF_OFFSET                  (440u)
#define CapSense_BUTTON12_SNS0_DIFF_SIZE                    (2u)
#define CapSense_BUTTON12_SNS0_DIFF_PARAM_ID                (0x820001B8u)

#define CapSense_BUTTON12_SNS0_NEG_BSLN_RST_CNT0_VALUE      (CapSense_dsRam.snsList.button12[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON12_SNS0_NEG_BSLN_RST_CNT0_OFFSET     (442u)
#define CapSense_BUTTON12_SNS0_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_BUTTON12_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID   (0x460001BAu)

#define CapSense_BUTTON12_SNS0_IDAC_COMP0_VALUE             (CapSense_dsRam.snsList.button12[0u].idacComp[0u])
#define CapSense_BUTTON12_SNS0_IDAC_COMP0_OFFSET            (443u)
#define CapSense_BUTTON12_SNS0_IDAC_COMP0_SIZE              (1u)
#define CapSense_BUTTON12_SNS0_IDAC_COMP0_PARAM_ID          (0x400001BBu)

#define CapSense_BUTTON13_SNS0_RAW0_VALUE                   (CapSense_dsRam.snsList.button13[0u].raw[0u])
#define CapSense_BUTTON13_SNS0_RAW0_OFFSET                  (444u)
#define CapSense_BUTTON13_SNS0_RAW0_SIZE                    (2u)
#define CapSense_BUTTON13_SNS0_RAW0_PARAM_ID                (0x830001BCu)

#define CapSense_BUTTON13_SNS0_BSLN0_VALUE                  (CapSense_dsRam.snsList.button13[0u].bsln[0u])
#define CapSense_BUTTON13_SNS0_BSLN0_OFFSET                 (446u)
#define CapSense_BUTTON13_SNS0_BSLN0_SIZE                   (2u)
#define CapSense_BUTTON13_SNS0_BSLN0_PARAM_ID               (0x8F0001BEu)

#define CapSense_BUTTON13_SNS0_BSLN_EXT0_VALUE              (CapSense_dsRam.snsList.button13[0u].bslnExt[0u])
#define CapSense_BUTTON13_SNS0_BSLN_EXT0_OFFSET             (448u)
#define CapSense_BUTTON13_SNS0_BSLN_EXT0_SIZE               (1u)
#define CapSense_BUTTON13_SNS0_BSLN_EXT0_PARAM_ID           (0x4A0001C0u)

#define CapSense_BUTTON13_SNS0_DIFF_VALUE                   (CapSense_dsRam.snsList.button13[0u].diff)
#define CapSense_BUTTON13_SNS0_DIFF_OFFSET                  (450u)
#define CapSense_BUTTON13_SNS0_DIFF_SIZE                    (2u)
#define CapSense_BUTTON13_SNS0_DIFF_PARAM_ID                (0x8E0001C2u)

#define CapSense_BUTTON13_SNS0_NEG_BSLN_RST_CNT0_VALUE      (CapSense_dsRam.snsList.button13[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON13_SNS0_NEG_BSLN_RST_CNT0_OFFSET     (452u)
#define CapSense_BUTTON13_SNS0_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_BUTTON13_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID   (0x4B0001C4u)

#define CapSense_BUTTON13_SNS0_IDAC_COMP0_VALUE             (CapSense_dsRam.snsList.button13[0u].idacComp[0u])
#define CapSense_BUTTON13_SNS0_IDAC_COMP0_OFFSET            (453u)
#define CapSense_BUTTON13_SNS0_IDAC_COMP0_SIZE              (1u)
#define CapSense_BUTTON13_SNS0_IDAC_COMP0_PARAM_ID          (0x4D0001C5u)

#define CapSense_BUTTON14_SNS0_RAW0_VALUE                   (CapSense_dsRam.snsList.button14[0u].raw[0u])
#define CapSense_BUTTON14_SNS0_RAW0_OFFSET                  (454u)
#define CapSense_BUTTON14_SNS0_RAW0_SIZE                    (2u)
#define CapSense_BUTTON14_SNS0_RAW0_PARAM_ID                (0x8F0001C6u)

#define CapSense_BUTTON14_SNS0_BSLN0_VALUE                  (CapSense_dsRam.snsList.button14[0u].bsln[0u])
#define CapSense_BUTTON14_SNS0_BSLN0_OFFSET                 (456u)
#define CapSense_BUTTON14_SNS0_BSLN0_SIZE                   (2u)
#define CapSense_BUTTON14_SNS0_BSLN0_PARAM_ID               (0x800001C8u)

#define CapSense_BUTTON14_SNS0_BSLN_EXT0_VALUE              (CapSense_dsRam.snsList.button14[0u].bslnExt[0u])
#define CapSense_BUTTON14_SNS0_BSLN_EXT0_OFFSET             (458u)
#define CapSense_BUTTON14_SNS0_BSLN_EXT0_SIZE               (1u)
#define CapSense_BUTTON14_SNS0_BSLN_EXT0_PARAM_ID           (0x440001CAu)

#define CapSense_BUTTON14_SNS0_DIFF_VALUE                   (CapSense_dsRam.snsList.button14[0u].diff)
#define CapSense_BUTTON14_SNS0_DIFF_OFFSET                  (460u)
#define CapSense_BUTTON14_SNS0_DIFF_SIZE                    (2u)
#define CapSense_BUTTON14_SNS0_DIFF_PARAM_ID                (0x810001CCu)

#define CapSense_BUTTON14_SNS0_NEG_BSLN_RST_CNT0_VALUE      (CapSense_dsRam.snsList.button14[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON14_SNS0_NEG_BSLN_RST_CNT0_OFFSET     (462u)
#define CapSense_BUTTON14_SNS0_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_BUTTON14_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID   (0x450001CEu)

#define CapSense_BUTTON14_SNS0_IDAC_COMP0_VALUE             (CapSense_dsRam.snsList.button14[0u].idacComp[0u])
#define CapSense_BUTTON14_SNS0_IDAC_COMP0_OFFSET            (463u)
#define CapSense_BUTTON14_SNS0_IDAC_COMP0_SIZE              (1u)
#define CapSense_BUTTON14_SNS0_IDAC_COMP0_PARAM_ID          (0x430001CFu)

#define CapSense_SNR_TEST_WIDGET_ID_VALUE                   (CapSense_dsRam.snrTestWidgetId)
#define CapSense_SNR_TEST_WIDGET_ID_OFFSET                  (464u)
#define CapSense_SNR_TEST_WIDGET_ID_SIZE                    (1u)
#define CapSense_SNR_TEST_WIDGET_ID_PARAM_ID                (0x640001D0u)

#define CapSense_SNR_TEST_SENSOR_ID_VALUE                   (CapSense_dsRam.snrTestSensorId)
#define CapSense_SNR_TEST_SENSOR_ID_OFFSET                  (465u)
#define CapSense_SNR_TEST_SENSOR_ID_SIZE                    (1u)
#define CapSense_SNR_TEST_SENSOR_ID_PARAM_ID                (0x620001D1u)

#define CapSense_SNR_TEST_SCAN_COUNTER_VALUE                (CapSense_dsRam.snrTestScanCounter)
#define CapSense_SNR_TEST_SCAN_COUNTER_OFFSET               (466u)
#define CapSense_SNR_TEST_SCAN_COUNTER_SIZE                 (2u)
#define CapSense_SNR_TEST_SCAN_COUNTER_PARAM_ID             (0x8B0001D2u)

#define CapSense_SNR_TEST_RAW_COUNT0_VALUE                  (CapSense_dsRam.snrTestRawCount[0u])
#define CapSense_SNR_TEST_RAW_COUNT0_OFFSET                 (468u)
#define CapSense_SNR_TEST_RAW_COUNT0_SIZE                   (2u)
#define CapSense_SNR_TEST_RAW_COUNT0_PARAM_ID               (0x860001D4u)


/*****************************************************************************/
/* Flash Data structure register definitions                                 */
/*****************************************************************************/
#define CapSense_BUTTON0_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[0].ptr2SnsFlash)
#define CapSense_BUTTON0_PTR2SNS_FLASH_OFFSET               (0u)
#define CapSense_BUTTON0_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON0_PTR2SNS_FLASH_PARAM_ID             (0xD1000000u)

#define CapSense_BUTTON0_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[0].ptr2WdgtRam)
#define CapSense_BUTTON0_PTR2WD_RAM_OFFSET                  (4u)
#define CapSense_BUTTON0_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON0_PTR2WD_RAM_PARAM_ID                (0xD0000004u)

#define CapSense_BUTTON0_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[0].ptr2SnsRam)
#define CapSense_BUTTON0_PTR2SNS_RAM_OFFSET                 (8u)
#define CapSense_BUTTON0_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON0_PTR2SNS_RAM_PARAM_ID               (0xD3000008u)

#define CapSense_BUTTON0_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[0].ptr2FltrHistory)
#define CapSense_BUTTON0_PTR2FLTR_HISTORY_OFFSET            (12u)
#define CapSense_BUTTON0_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON0_PTR2FLTR_HISTORY_PARAM_ID          (0xD200000Cu)

#define CapSense_BUTTON0_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[0].ptr2DebounceArr)
#define CapSense_BUTTON0_PTR2DEBOUNCE_OFFSET                (16u)
#define CapSense_BUTTON0_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON0_PTR2DEBOUNCE_PARAM_ID              (0xD4000010u)

#define CapSense_BUTTON0_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[0].staticConfig)
#define CapSense_BUTTON0_STATIC_CONFIG_OFFSET               (20u)
#define CapSense_BUTTON0_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON0_STATIC_CONFIG_PARAM_ID             (0xD5000014u)

#define CapSense_BUTTON0_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[0].totalNumSns)
#define CapSense_BUTTON0_TOTAL_NUM_SNS_OFFSET               (24u)
#define CapSense_BUTTON0_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON0_TOTAL_NUM_SNS_PARAM_ID             (0x99000018u)

#define CapSense_BUTTON0_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[0].wdgtType)
#define CapSense_BUTTON0_TYPE_OFFSET                        (26u)
#define CapSense_BUTTON0_TYPE_SIZE                          (1u)
#define CapSense_BUTTON0_TYPE_PARAM_ID                      (0x5D00001Au)

#define CapSense_BUTTON0_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[0].numCols)
#define CapSense_BUTTON0_NUM_COLS_OFFSET                    (27u)
#define CapSense_BUTTON0_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON0_NUM_COLS_PARAM_ID                  (0x5B00001Bu)

#define CapSense_BUTTON0_PTR2NOISE_ENVLP_VALUE              (CapSense_dsFlash.wdgtArray[0].ptr2NoiseEnvlp)
#define CapSense_BUTTON0_PTR2NOISE_ENVLP_OFFSET             (28u)
#define CapSense_BUTTON0_PTR2NOISE_ENVLP_SIZE               (4u)
#define CapSense_BUTTON0_PTR2NOISE_ENVLP_PARAM_ID           (0xD700001Cu)

#define CapSense_BUTTON1_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[1].ptr2SnsFlash)
#define CapSense_BUTTON1_PTR2SNS_FLASH_OFFSET               (32u)
#define CapSense_BUTTON1_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON1_PTR2SNS_FLASH_PARAM_ID             (0xD8010020u)

#define CapSense_BUTTON1_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[1].ptr2WdgtRam)
#define CapSense_BUTTON1_PTR2WD_RAM_OFFSET                  (36u)
#define CapSense_BUTTON1_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON1_PTR2WD_RAM_PARAM_ID                (0xD9010024u)

#define CapSense_BUTTON1_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[1].ptr2SnsRam)
#define CapSense_BUTTON1_PTR2SNS_RAM_OFFSET                 (40u)
#define CapSense_BUTTON1_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON1_PTR2SNS_RAM_PARAM_ID               (0xDA010028u)

#define CapSense_BUTTON1_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[1].ptr2FltrHistory)
#define CapSense_BUTTON1_PTR2FLTR_HISTORY_OFFSET            (44u)
#define CapSense_BUTTON1_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON1_PTR2FLTR_HISTORY_PARAM_ID          (0xDB01002Cu)

#define CapSense_BUTTON1_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[1].ptr2DebounceArr)
#define CapSense_BUTTON1_PTR2DEBOUNCE_OFFSET                (48u)
#define CapSense_BUTTON1_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON1_PTR2DEBOUNCE_PARAM_ID              (0xDD010030u)

#define CapSense_BUTTON1_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[1].staticConfig)
#define CapSense_BUTTON1_STATIC_CONFIG_OFFSET               (52u)
#define CapSense_BUTTON1_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON1_STATIC_CONFIG_PARAM_ID             (0xDC010034u)

#define CapSense_BUTTON1_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[1].totalNumSns)
#define CapSense_BUTTON1_TOTAL_NUM_SNS_OFFSET               (56u)
#define CapSense_BUTTON1_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON1_TOTAL_NUM_SNS_PARAM_ID             (0x90010038u)

#define CapSense_BUTTON1_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[1].wdgtType)
#define CapSense_BUTTON1_TYPE_OFFSET                        (58u)
#define CapSense_BUTTON1_TYPE_SIZE                          (1u)
#define CapSense_BUTTON1_TYPE_PARAM_ID                      (0x5401003Au)

#define CapSense_BUTTON1_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[1].numCols)
#define CapSense_BUTTON1_NUM_COLS_OFFSET                    (59u)
#define CapSense_BUTTON1_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON1_NUM_COLS_PARAM_ID                  (0x5201003Bu)

#define CapSense_BUTTON1_PTR2NOISE_ENVLP_VALUE              (CapSense_dsFlash.wdgtArray[1].ptr2NoiseEnvlp)
#define CapSense_BUTTON1_PTR2NOISE_ENVLP_OFFSET             (60u)
#define CapSense_BUTTON1_PTR2NOISE_ENVLP_SIZE               (4u)
#define CapSense_BUTTON1_PTR2NOISE_ENVLP_PARAM_ID           (0xDE01003Cu)

#define CapSense_BUTTON2_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[2].ptr2SnsFlash)
#define CapSense_BUTTON2_PTR2SNS_FLASH_OFFSET               (64u)
#define CapSense_BUTTON2_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON2_PTR2SNS_FLASH_PARAM_ID             (0xDA020040u)

#define CapSense_BUTTON2_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[2].ptr2WdgtRam)
#define CapSense_BUTTON2_PTR2WD_RAM_OFFSET                  (68u)
#define CapSense_BUTTON2_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON2_PTR2WD_RAM_PARAM_ID                (0xDB020044u)

#define CapSense_BUTTON2_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[2].ptr2SnsRam)
#define CapSense_BUTTON2_PTR2SNS_RAM_OFFSET                 (72u)
#define CapSense_BUTTON2_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON2_PTR2SNS_RAM_PARAM_ID               (0xD8020048u)

#define CapSense_BUTTON2_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[2].ptr2FltrHistory)
#define CapSense_BUTTON2_PTR2FLTR_HISTORY_OFFSET            (76u)
#define CapSense_BUTTON2_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON2_PTR2FLTR_HISTORY_PARAM_ID          (0xD902004Cu)

#define CapSense_BUTTON2_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[2].ptr2DebounceArr)
#define CapSense_BUTTON2_PTR2DEBOUNCE_OFFSET                (80u)
#define CapSense_BUTTON2_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON2_PTR2DEBOUNCE_PARAM_ID              (0xDF020050u)

#define CapSense_BUTTON2_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[2].staticConfig)
#define CapSense_BUTTON2_STATIC_CONFIG_OFFSET               (84u)
#define CapSense_BUTTON2_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON2_STATIC_CONFIG_PARAM_ID             (0xDE020054u)

#define CapSense_BUTTON2_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[2].totalNumSns)
#define CapSense_BUTTON2_TOTAL_NUM_SNS_OFFSET               (88u)
#define CapSense_BUTTON2_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON2_TOTAL_NUM_SNS_PARAM_ID             (0x92020058u)

#define CapSense_BUTTON2_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[2].wdgtType)
#define CapSense_BUTTON2_TYPE_OFFSET                        (90u)
#define CapSense_BUTTON2_TYPE_SIZE                          (1u)
#define CapSense_BUTTON2_TYPE_PARAM_ID                      (0x5602005Au)

#define CapSense_BUTTON2_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[2].numCols)
#define CapSense_BUTTON2_NUM_COLS_OFFSET                    (91u)
#define CapSense_BUTTON2_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON2_NUM_COLS_PARAM_ID                  (0x5002005Bu)

#define CapSense_BUTTON2_PTR2NOISE_ENVLP_VALUE              (CapSense_dsFlash.wdgtArray[2].ptr2NoiseEnvlp)
#define CapSense_BUTTON2_PTR2NOISE_ENVLP_OFFSET             (92u)
#define CapSense_BUTTON2_PTR2NOISE_ENVLP_SIZE               (4u)
#define CapSense_BUTTON2_PTR2NOISE_ENVLP_PARAM_ID           (0xDC02005Cu)

#define CapSense_BUTTON3_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[3].ptr2SnsFlash)
#define CapSense_BUTTON3_PTR2SNS_FLASH_OFFSET               (96u)
#define CapSense_BUTTON3_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON3_PTR2SNS_FLASH_PARAM_ID             (0xD3030060u)

#define CapSense_BUTTON3_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[3].ptr2WdgtRam)
#define CapSense_BUTTON3_PTR2WD_RAM_OFFSET                  (100u)
#define CapSense_BUTTON3_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON3_PTR2WD_RAM_PARAM_ID                (0xD2030064u)

#define CapSense_BUTTON3_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[3].ptr2SnsRam)
#define CapSense_BUTTON3_PTR2SNS_RAM_OFFSET                 (104u)
#define CapSense_BUTTON3_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON3_PTR2SNS_RAM_PARAM_ID               (0xD1030068u)

#define CapSense_BUTTON3_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[3].ptr2FltrHistory)
#define CapSense_BUTTON3_PTR2FLTR_HISTORY_OFFSET            (108u)
#define CapSense_BUTTON3_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON3_PTR2FLTR_HISTORY_PARAM_ID          (0xD003006Cu)

#define CapSense_BUTTON3_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[3].ptr2DebounceArr)
#define CapSense_BUTTON3_PTR2DEBOUNCE_OFFSET                (112u)
#define CapSense_BUTTON3_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON3_PTR2DEBOUNCE_PARAM_ID              (0xD6030070u)

#define CapSense_BUTTON3_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[3].staticConfig)
#define CapSense_BUTTON3_STATIC_CONFIG_OFFSET               (116u)
#define CapSense_BUTTON3_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON3_STATIC_CONFIG_PARAM_ID             (0xD7030074u)

#define CapSense_BUTTON3_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[3].totalNumSns)
#define CapSense_BUTTON3_TOTAL_NUM_SNS_OFFSET               (120u)
#define CapSense_BUTTON3_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON3_TOTAL_NUM_SNS_PARAM_ID             (0x9B030078u)

#define CapSense_BUTTON3_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[3].wdgtType)
#define CapSense_BUTTON3_TYPE_OFFSET                        (122u)
#define CapSense_BUTTON3_TYPE_SIZE                          (1u)
#define CapSense_BUTTON3_TYPE_PARAM_ID                      (0x5F03007Au)

#define CapSense_BUTTON3_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[3].numCols)
#define CapSense_BUTTON3_NUM_COLS_OFFSET                    (123u)
#define CapSense_BUTTON3_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON3_NUM_COLS_PARAM_ID                  (0x5903007Bu)

#define CapSense_BUTTON3_PTR2NOISE_ENVLP_VALUE              (CapSense_dsFlash.wdgtArray[3].ptr2NoiseEnvlp)
#define CapSense_BUTTON3_PTR2NOISE_ENVLP_OFFSET             (124u)
#define CapSense_BUTTON3_PTR2NOISE_ENVLP_SIZE               (4u)
#define CapSense_BUTTON3_PTR2NOISE_ENVLP_PARAM_ID           (0xD503007Cu)

#define CapSense_BUTTON4_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[4].ptr2SnsFlash)
#define CapSense_BUTTON4_PTR2SNS_FLASH_OFFSET               (128u)
#define CapSense_BUTTON4_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON4_PTR2SNS_FLASH_PARAM_ID             (0xDE040080u)

#define CapSense_BUTTON4_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[4].ptr2WdgtRam)
#define CapSense_BUTTON4_PTR2WD_RAM_OFFSET                  (132u)
#define CapSense_BUTTON4_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON4_PTR2WD_RAM_PARAM_ID                (0xDF040084u)

#define CapSense_BUTTON4_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[4].ptr2SnsRam)
#define CapSense_BUTTON4_PTR2SNS_RAM_OFFSET                 (136u)
#define CapSense_BUTTON4_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON4_PTR2SNS_RAM_PARAM_ID               (0xDC040088u)

#define CapSense_BUTTON4_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[4].ptr2FltrHistory)
#define CapSense_BUTTON4_PTR2FLTR_HISTORY_OFFSET            (140u)
#define CapSense_BUTTON4_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON4_PTR2FLTR_HISTORY_PARAM_ID          (0xDD04008Cu)

#define CapSense_BUTTON4_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[4].ptr2DebounceArr)
#define CapSense_BUTTON4_PTR2DEBOUNCE_OFFSET                (144u)
#define CapSense_BUTTON4_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON4_PTR2DEBOUNCE_PARAM_ID              (0xDB040090u)

#define CapSense_BUTTON4_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[4].staticConfig)
#define CapSense_BUTTON4_STATIC_CONFIG_OFFSET               (148u)
#define CapSense_BUTTON4_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON4_STATIC_CONFIG_PARAM_ID             (0xDA040094u)

#define CapSense_BUTTON4_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[4].totalNumSns)
#define CapSense_BUTTON4_TOTAL_NUM_SNS_OFFSET               (152u)
#define CapSense_BUTTON4_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON4_TOTAL_NUM_SNS_PARAM_ID             (0x96040098u)

#define CapSense_BUTTON4_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[4].wdgtType)
#define CapSense_BUTTON4_TYPE_OFFSET                        (154u)
#define CapSense_BUTTON4_TYPE_SIZE                          (1u)
#define CapSense_BUTTON4_TYPE_PARAM_ID                      (0x5204009Au)

#define CapSense_BUTTON4_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[4].numCols)
#define CapSense_BUTTON4_NUM_COLS_OFFSET                    (155u)
#define CapSense_BUTTON4_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON4_NUM_COLS_PARAM_ID                  (0x5404009Bu)

#define CapSense_BUTTON4_PTR2NOISE_ENVLP_VALUE              (CapSense_dsFlash.wdgtArray[4].ptr2NoiseEnvlp)
#define CapSense_BUTTON4_PTR2NOISE_ENVLP_OFFSET             (156u)
#define CapSense_BUTTON4_PTR2NOISE_ENVLP_SIZE               (4u)
#define CapSense_BUTTON4_PTR2NOISE_ENVLP_PARAM_ID           (0xD804009Cu)

#define CapSense_BUTTON5_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[5].ptr2SnsFlash)
#define CapSense_BUTTON5_PTR2SNS_FLASH_OFFSET               (160u)
#define CapSense_BUTTON5_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON5_PTR2SNS_FLASH_PARAM_ID             (0xD70500A0u)

#define CapSense_BUTTON5_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[5].ptr2WdgtRam)
#define CapSense_BUTTON5_PTR2WD_RAM_OFFSET                  (164u)
#define CapSense_BUTTON5_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON5_PTR2WD_RAM_PARAM_ID                (0xD60500A4u)

#define CapSense_BUTTON5_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[5].ptr2SnsRam)
#define CapSense_BUTTON5_PTR2SNS_RAM_OFFSET                 (168u)
#define CapSense_BUTTON5_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON5_PTR2SNS_RAM_PARAM_ID               (0xD50500A8u)

#define CapSense_BUTTON5_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[5].ptr2FltrHistory)
#define CapSense_BUTTON5_PTR2FLTR_HISTORY_OFFSET            (172u)
#define CapSense_BUTTON5_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON5_PTR2FLTR_HISTORY_PARAM_ID          (0xD40500ACu)

#define CapSense_BUTTON5_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[5].ptr2DebounceArr)
#define CapSense_BUTTON5_PTR2DEBOUNCE_OFFSET                (176u)
#define CapSense_BUTTON5_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON5_PTR2DEBOUNCE_PARAM_ID              (0xD20500B0u)

#define CapSense_BUTTON5_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[5].staticConfig)
#define CapSense_BUTTON5_STATIC_CONFIG_OFFSET               (180u)
#define CapSense_BUTTON5_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON5_STATIC_CONFIG_PARAM_ID             (0xD30500B4u)

#define CapSense_BUTTON5_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[5].totalNumSns)
#define CapSense_BUTTON5_TOTAL_NUM_SNS_OFFSET               (184u)
#define CapSense_BUTTON5_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON5_TOTAL_NUM_SNS_PARAM_ID             (0x9F0500B8u)

#define CapSense_BUTTON5_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[5].wdgtType)
#define CapSense_BUTTON5_TYPE_OFFSET                        (186u)
#define CapSense_BUTTON5_TYPE_SIZE                          (1u)
#define CapSense_BUTTON5_TYPE_PARAM_ID                      (0x5B0500BAu)

#define CapSense_BUTTON5_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[5].numCols)
#define CapSense_BUTTON5_NUM_COLS_OFFSET                    (187u)
#define CapSense_BUTTON5_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON5_NUM_COLS_PARAM_ID                  (0x5D0500BBu)

#define CapSense_BUTTON5_PTR2NOISE_ENVLP_VALUE              (CapSense_dsFlash.wdgtArray[5].ptr2NoiseEnvlp)
#define CapSense_BUTTON5_PTR2NOISE_ENVLP_OFFSET             (188u)
#define CapSense_BUTTON5_PTR2NOISE_ENVLP_SIZE               (4u)
#define CapSense_BUTTON5_PTR2NOISE_ENVLP_PARAM_ID           (0xD10500BCu)

#define CapSense_BUTTON6_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[6].ptr2SnsFlash)
#define CapSense_BUTTON6_PTR2SNS_FLASH_OFFSET               (192u)
#define CapSense_BUTTON6_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON6_PTR2SNS_FLASH_PARAM_ID             (0xD50600C0u)

#define CapSense_BUTTON6_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[6].ptr2WdgtRam)
#define CapSense_BUTTON6_PTR2WD_RAM_OFFSET                  (196u)
#define CapSense_BUTTON6_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON6_PTR2WD_RAM_PARAM_ID                (0xD40600C4u)

#define CapSense_BUTTON6_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[6].ptr2SnsRam)
#define CapSense_BUTTON6_PTR2SNS_RAM_OFFSET                 (200u)
#define CapSense_BUTTON6_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON6_PTR2SNS_RAM_PARAM_ID               (0xD70600C8u)

#define CapSense_BUTTON6_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[6].ptr2FltrHistory)
#define CapSense_BUTTON6_PTR2FLTR_HISTORY_OFFSET            (204u)
#define CapSense_BUTTON6_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON6_PTR2FLTR_HISTORY_PARAM_ID          (0xD60600CCu)

#define CapSense_BUTTON6_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[6].ptr2DebounceArr)
#define CapSense_BUTTON6_PTR2DEBOUNCE_OFFSET                (208u)
#define CapSense_BUTTON6_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON6_PTR2DEBOUNCE_PARAM_ID              (0xD00600D0u)

#define CapSense_BUTTON6_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[6].staticConfig)
#define CapSense_BUTTON6_STATIC_CONFIG_OFFSET               (212u)
#define CapSense_BUTTON6_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON6_STATIC_CONFIG_PARAM_ID             (0xD10600D4u)

#define CapSense_BUTTON6_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[6].totalNumSns)
#define CapSense_BUTTON6_TOTAL_NUM_SNS_OFFSET               (216u)
#define CapSense_BUTTON6_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON6_TOTAL_NUM_SNS_PARAM_ID             (0x9D0600D8u)

#define CapSense_BUTTON6_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[6].wdgtType)
#define CapSense_BUTTON6_TYPE_OFFSET                        (218u)
#define CapSense_BUTTON6_TYPE_SIZE                          (1u)
#define CapSense_BUTTON6_TYPE_PARAM_ID                      (0x590600DAu)

#define CapSense_BUTTON6_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[6].numCols)
#define CapSense_BUTTON6_NUM_COLS_OFFSET                    (219u)
#define CapSense_BUTTON6_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON6_NUM_COLS_PARAM_ID                  (0x5F0600DBu)

#define CapSense_BUTTON6_PTR2NOISE_ENVLP_VALUE              (CapSense_dsFlash.wdgtArray[6].ptr2NoiseEnvlp)
#define CapSense_BUTTON6_PTR2NOISE_ENVLP_OFFSET             (220u)
#define CapSense_BUTTON6_PTR2NOISE_ENVLP_SIZE               (4u)
#define CapSense_BUTTON6_PTR2NOISE_ENVLP_PARAM_ID           (0xD30600DCu)

#define CapSense_BUTTON7_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[7].ptr2SnsFlash)
#define CapSense_BUTTON7_PTR2SNS_FLASH_OFFSET               (224u)
#define CapSense_BUTTON7_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON7_PTR2SNS_FLASH_PARAM_ID             (0xDC0700E0u)

#define CapSense_BUTTON7_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[7].ptr2WdgtRam)
#define CapSense_BUTTON7_PTR2WD_RAM_OFFSET                  (228u)
#define CapSense_BUTTON7_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON7_PTR2WD_RAM_PARAM_ID                (0xDD0700E4u)

#define CapSense_BUTTON7_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[7].ptr2SnsRam)
#define CapSense_BUTTON7_PTR2SNS_RAM_OFFSET                 (232u)
#define CapSense_BUTTON7_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON7_PTR2SNS_RAM_PARAM_ID               (0xDE0700E8u)

#define CapSense_BUTTON7_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[7].ptr2FltrHistory)
#define CapSense_BUTTON7_PTR2FLTR_HISTORY_OFFSET            (236u)
#define CapSense_BUTTON7_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON7_PTR2FLTR_HISTORY_PARAM_ID          (0xDF0700ECu)

#define CapSense_BUTTON7_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[7].ptr2DebounceArr)
#define CapSense_BUTTON7_PTR2DEBOUNCE_OFFSET                (240u)
#define CapSense_BUTTON7_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON7_PTR2DEBOUNCE_PARAM_ID              (0xD90700F0u)

#define CapSense_BUTTON7_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[7].staticConfig)
#define CapSense_BUTTON7_STATIC_CONFIG_OFFSET               (244u)
#define CapSense_BUTTON7_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON7_STATIC_CONFIG_PARAM_ID             (0xD80700F4u)

#define CapSense_BUTTON7_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[7].totalNumSns)
#define CapSense_BUTTON7_TOTAL_NUM_SNS_OFFSET               (248u)
#define CapSense_BUTTON7_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON7_TOTAL_NUM_SNS_PARAM_ID             (0x940700F8u)

#define CapSense_BUTTON7_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[7].wdgtType)
#define CapSense_BUTTON7_TYPE_OFFSET                        (250u)
#define CapSense_BUTTON7_TYPE_SIZE                          (1u)
#define CapSense_BUTTON7_TYPE_PARAM_ID                      (0x500700FAu)

#define CapSense_BUTTON7_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[7].numCols)
#define CapSense_BUTTON7_NUM_COLS_OFFSET                    (251u)
#define CapSense_BUTTON7_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON7_NUM_COLS_PARAM_ID                  (0x560700FBu)

#define CapSense_BUTTON7_PTR2NOISE_ENVLP_VALUE              (CapSense_dsFlash.wdgtArray[7].ptr2NoiseEnvlp)
#define CapSense_BUTTON7_PTR2NOISE_ENVLP_OFFSET             (252u)
#define CapSense_BUTTON7_PTR2NOISE_ENVLP_SIZE               (4u)
#define CapSense_BUTTON7_PTR2NOISE_ENVLP_PARAM_ID           (0xDA0700FCu)

#define CapSense_BUTTON8_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[8].ptr2SnsFlash)
#define CapSense_BUTTON8_PTR2SNS_FLASH_OFFSET               (256u)
#define CapSense_BUTTON8_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON8_PTR2SNS_FLASH_PARAM_ID             (0xDB080100u)

#define CapSense_BUTTON8_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[8].ptr2WdgtRam)
#define CapSense_BUTTON8_PTR2WD_RAM_OFFSET                  (260u)
#define CapSense_BUTTON8_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON8_PTR2WD_RAM_PARAM_ID                (0xDA080104u)

#define CapSense_BUTTON8_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[8].ptr2SnsRam)
#define CapSense_BUTTON8_PTR2SNS_RAM_OFFSET                 (264u)
#define CapSense_BUTTON8_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON8_PTR2SNS_RAM_PARAM_ID               (0xD9080108u)

#define CapSense_BUTTON8_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[8].ptr2FltrHistory)
#define CapSense_BUTTON8_PTR2FLTR_HISTORY_OFFSET            (268u)
#define CapSense_BUTTON8_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON8_PTR2FLTR_HISTORY_PARAM_ID          (0xD808010Cu)

#define CapSense_BUTTON8_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[8].ptr2DebounceArr)
#define CapSense_BUTTON8_PTR2DEBOUNCE_OFFSET                (272u)
#define CapSense_BUTTON8_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON8_PTR2DEBOUNCE_PARAM_ID              (0xDE080110u)

#define CapSense_BUTTON8_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[8].staticConfig)
#define CapSense_BUTTON8_STATIC_CONFIG_OFFSET               (276u)
#define CapSense_BUTTON8_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON8_STATIC_CONFIG_PARAM_ID             (0xDF080114u)

#define CapSense_BUTTON8_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[8].totalNumSns)
#define CapSense_BUTTON8_TOTAL_NUM_SNS_OFFSET               (280u)
#define CapSense_BUTTON8_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON8_TOTAL_NUM_SNS_PARAM_ID             (0x93080118u)

#define CapSense_BUTTON8_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[8].wdgtType)
#define CapSense_BUTTON8_TYPE_OFFSET                        (282u)
#define CapSense_BUTTON8_TYPE_SIZE                          (1u)
#define CapSense_BUTTON8_TYPE_PARAM_ID                      (0x5708011Au)

#define CapSense_BUTTON8_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[8].numCols)
#define CapSense_BUTTON8_NUM_COLS_OFFSET                    (283u)
#define CapSense_BUTTON8_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON8_NUM_COLS_PARAM_ID                  (0x5108011Bu)

#define CapSense_BUTTON8_PTR2NOISE_ENVLP_VALUE              (CapSense_dsFlash.wdgtArray[8].ptr2NoiseEnvlp)
#define CapSense_BUTTON8_PTR2NOISE_ENVLP_OFFSET             (284u)
#define CapSense_BUTTON8_PTR2NOISE_ENVLP_SIZE               (4u)
#define CapSense_BUTTON8_PTR2NOISE_ENVLP_PARAM_ID           (0xDD08011Cu)

#define CapSense_BUTTON9_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[9].ptr2SnsFlash)
#define CapSense_BUTTON9_PTR2SNS_FLASH_OFFSET               (288u)
#define CapSense_BUTTON9_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON9_PTR2SNS_FLASH_PARAM_ID             (0xD2090120u)

#define CapSense_BUTTON9_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[9].ptr2WdgtRam)
#define CapSense_BUTTON9_PTR2WD_RAM_OFFSET                  (292u)
#define CapSense_BUTTON9_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON9_PTR2WD_RAM_PARAM_ID                (0xD3090124u)

#define CapSense_BUTTON9_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[9].ptr2SnsRam)
#define CapSense_BUTTON9_PTR2SNS_RAM_OFFSET                 (296u)
#define CapSense_BUTTON9_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON9_PTR2SNS_RAM_PARAM_ID               (0xD0090128u)

#define CapSense_BUTTON9_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[9].ptr2FltrHistory)
#define CapSense_BUTTON9_PTR2FLTR_HISTORY_OFFSET            (300u)
#define CapSense_BUTTON9_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON9_PTR2FLTR_HISTORY_PARAM_ID          (0xD109012Cu)

#define CapSense_BUTTON9_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[9].ptr2DebounceArr)
#define CapSense_BUTTON9_PTR2DEBOUNCE_OFFSET                (304u)
#define CapSense_BUTTON9_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON9_PTR2DEBOUNCE_PARAM_ID              (0xD7090130u)

#define CapSense_BUTTON9_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[9].staticConfig)
#define CapSense_BUTTON9_STATIC_CONFIG_OFFSET               (308u)
#define CapSense_BUTTON9_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON9_STATIC_CONFIG_PARAM_ID             (0xD6090134u)

#define CapSense_BUTTON9_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[9].totalNumSns)
#define CapSense_BUTTON9_TOTAL_NUM_SNS_OFFSET               (312u)
#define CapSense_BUTTON9_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON9_TOTAL_NUM_SNS_PARAM_ID             (0x9A090138u)

#define CapSense_BUTTON9_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[9].wdgtType)
#define CapSense_BUTTON9_TYPE_OFFSET                        (314u)
#define CapSense_BUTTON9_TYPE_SIZE                          (1u)
#define CapSense_BUTTON9_TYPE_PARAM_ID                      (0x5E09013Au)

#define CapSense_BUTTON9_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[9].numCols)
#define CapSense_BUTTON9_NUM_COLS_OFFSET                    (315u)
#define CapSense_BUTTON9_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON9_NUM_COLS_PARAM_ID                  (0x5809013Bu)

#define CapSense_BUTTON9_PTR2NOISE_ENVLP_VALUE              (CapSense_dsFlash.wdgtArray[9].ptr2NoiseEnvlp)
#define CapSense_BUTTON9_PTR2NOISE_ENVLP_OFFSET             (316u)
#define CapSense_BUTTON9_PTR2NOISE_ENVLP_SIZE               (4u)
#define CapSense_BUTTON9_PTR2NOISE_ENVLP_PARAM_ID           (0xD409013Cu)

#define CapSense_BUTTON10_PTR2SNS_FLASH_VALUE               (CapSense_dsFlash.wdgtArray[10].ptr2SnsFlash)
#define CapSense_BUTTON10_PTR2SNS_FLASH_OFFSET              (320u)
#define CapSense_BUTTON10_PTR2SNS_FLASH_SIZE                (4u)
#define CapSense_BUTTON10_PTR2SNS_FLASH_PARAM_ID            (0xD00A0140u)

#define CapSense_BUTTON10_PTR2WD_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[10].ptr2WdgtRam)
#define CapSense_BUTTON10_PTR2WD_RAM_OFFSET                 (324u)
#define CapSense_BUTTON10_PTR2WD_RAM_SIZE                   (4u)
#define CapSense_BUTTON10_PTR2WD_RAM_PARAM_ID               (0xD10A0144u)

#define CapSense_BUTTON10_PTR2SNS_RAM_VALUE                 (CapSense_dsFlash.wdgtArray[10].ptr2SnsRam)
#define CapSense_BUTTON10_PTR2SNS_RAM_OFFSET                (328u)
#define CapSense_BUTTON10_PTR2SNS_RAM_SIZE                  (4u)
#define CapSense_BUTTON10_PTR2SNS_RAM_PARAM_ID              (0xD20A0148u)

#define CapSense_BUTTON10_PTR2FLTR_HISTORY_VALUE            (CapSense_dsFlash.wdgtArray[10].ptr2FltrHistory)
#define CapSense_BUTTON10_PTR2FLTR_HISTORY_OFFSET           (332u)
#define CapSense_BUTTON10_PTR2FLTR_HISTORY_SIZE             (4u)
#define CapSense_BUTTON10_PTR2FLTR_HISTORY_PARAM_ID         (0xD30A014Cu)

#define CapSense_BUTTON10_PTR2DEBOUNCE_VALUE                (CapSense_dsFlash.wdgtArray[10].ptr2DebounceArr)
#define CapSense_BUTTON10_PTR2DEBOUNCE_OFFSET               (336u)
#define CapSense_BUTTON10_PTR2DEBOUNCE_SIZE                 (4u)
#define CapSense_BUTTON10_PTR2DEBOUNCE_PARAM_ID             (0xD50A0150u)

#define CapSense_BUTTON10_STATIC_CONFIG_VALUE               (CapSense_dsFlash.wdgtArray[10].staticConfig)
#define CapSense_BUTTON10_STATIC_CONFIG_OFFSET              (340u)
#define CapSense_BUTTON10_STATIC_CONFIG_SIZE                (4u)
#define CapSense_BUTTON10_STATIC_CONFIG_PARAM_ID            (0xD40A0154u)

#define CapSense_BUTTON10_TOTAL_NUM_SNS_VALUE               (CapSense_dsFlash.wdgtArray[10].totalNumSns)
#define CapSense_BUTTON10_TOTAL_NUM_SNS_OFFSET              (344u)
#define CapSense_BUTTON10_TOTAL_NUM_SNS_SIZE                (2u)
#define CapSense_BUTTON10_TOTAL_NUM_SNS_PARAM_ID            (0x980A0158u)

#define CapSense_BUTTON10_TYPE_VALUE                        (CapSense_dsFlash.wdgtArray[10].wdgtType)
#define CapSense_BUTTON10_TYPE_OFFSET                       (346u)
#define CapSense_BUTTON10_TYPE_SIZE                         (1u)
#define CapSense_BUTTON10_TYPE_PARAM_ID                     (0x5C0A015Au)

#define CapSense_BUTTON10_NUM_COLS_VALUE                    (CapSense_dsFlash.wdgtArray[10].numCols)
#define CapSense_BUTTON10_NUM_COLS_OFFSET                   (347u)
#define CapSense_BUTTON10_NUM_COLS_SIZE                     (1u)
#define CapSense_BUTTON10_NUM_COLS_PARAM_ID                 (0x5A0A015Bu)

#define CapSense_BUTTON10_PTR2NOISE_ENVLP_VALUE             (CapSense_dsFlash.wdgtArray[10].ptr2NoiseEnvlp)
#define CapSense_BUTTON10_PTR2NOISE_ENVLP_OFFSET            (348u)
#define CapSense_BUTTON10_PTR2NOISE_ENVLP_SIZE              (4u)
#define CapSense_BUTTON10_PTR2NOISE_ENVLP_PARAM_ID          (0xD60A015Cu)

#define CapSense_BUTTON11_PTR2SNS_FLASH_VALUE               (CapSense_dsFlash.wdgtArray[11].ptr2SnsFlash)
#define CapSense_BUTTON11_PTR2SNS_FLASH_OFFSET              (352u)
#define CapSense_BUTTON11_PTR2SNS_FLASH_SIZE                (4u)
#define CapSense_BUTTON11_PTR2SNS_FLASH_PARAM_ID            (0xD90B0160u)

#define CapSense_BUTTON11_PTR2WD_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[11].ptr2WdgtRam)
#define CapSense_BUTTON11_PTR2WD_RAM_OFFSET                 (356u)
#define CapSense_BUTTON11_PTR2WD_RAM_SIZE                   (4u)
#define CapSense_BUTTON11_PTR2WD_RAM_PARAM_ID               (0xD80B0164u)

#define CapSense_BUTTON11_PTR2SNS_RAM_VALUE                 (CapSense_dsFlash.wdgtArray[11].ptr2SnsRam)
#define CapSense_BUTTON11_PTR2SNS_RAM_OFFSET                (360u)
#define CapSense_BUTTON11_PTR2SNS_RAM_SIZE                  (4u)
#define CapSense_BUTTON11_PTR2SNS_RAM_PARAM_ID              (0xDB0B0168u)

#define CapSense_BUTTON11_PTR2FLTR_HISTORY_VALUE            (CapSense_dsFlash.wdgtArray[11].ptr2FltrHistory)
#define CapSense_BUTTON11_PTR2FLTR_HISTORY_OFFSET           (364u)
#define CapSense_BUTTON11_PTR2FLTR_HISTORY_SIZE             (4u)
#define CapSense_BUTTON11_PTR2FLTR_HISTORY_PARAM_ID         (0xDA0B016Cu)

#define CapSense_BUTTON11_PTR2DEBOUNCE_VALUE                (CapSense_dsFlash.wdgtArray[11].ptr2DebounceArr)
#define CapSense_BUTTON11_PTR2DEBOUNCE_OFFSET               (368u)
#define CapSense_BUTTON11_PTR2DEBOUNCE_SIZE                 (4u)
#define CapSense_BUTTON11_PTR2DEBOUNCE_PARAM_ID             (0xDC0B0170u)

#define CapSense_BUTTON11_STATIC_CONFIG_VALUE               (CapSense_dsFlash.wdgtArray[11].staticConfig)
#define CapSense_BUTTON11_STATIC_CONFIG_OFFSET              (372u)
#define CapSense_BUTTON11_STATIC_CONFIG_SIZE                (4u)
#define CapSense_BUTTON11_STATIC_CONFIG_PARAM_ID            (0xDD0B0174u)

#define CapSense_BUTTON11_TOTAL_NUM_SNS_VALUE               (CapSense_dsFlash.wdgtArray[11].totalNumSns)
#define CapSense_BUTTON11_TOTAL_NUM_SNS_OFFSET              (376u)
#define CapSense_BUTTON11_TOTAL_NUM_SNS_SIZE                (2u)
#define CapSense_BUTTON11_TOTAL_NUM_SNS_PARAM_ID            (0x910B0178u)

#define CapSense_BUTTON11_TYPE_VALUE                        (CapSense_dsFlash.wdgtArray[11].wdgtType)
#define CapSense_BUTTON11_TYPE_OFFSET                       (378u)
#define CapSense_BUTTON11_TYPE_SIZE                         (1u)
#define CapSense_BUTTON11_TYPE_PARAM_ID                     (0x550B017Au)

#define CapSense_BUTTON11_NUM_COLS_VALUE                    (CapSense_dsFlash.wdgtArray[11].numCols)
#define CapSense_BUTTON11_NUM_COLS_OFFSET                   (379u)
#define CapSense_BUTTON11_NUM_COLS_SIZE                     (1u)
#define CapSense_BUTTON11_NUM_COLS_PARAM_ID                 (0x530B017Bu)

#define CapSense_BUTTON11_PTR2NOISE_ENVLP_VALUE             (CapSense_dsFlash.wdgtArray[11].ptr2NoiseEnvlp)
#define CapSense_BUTTON11_PTR2NOISE_ENVLP_OFFSET            (380u)
#define CapSense_BUTTON11_PTR2NOISE_ENVLP_SIZE              (4u)
#define CapSense_BUTTON11_PTR2NOISE_ENVLP_PARAM_ID          (0xDF0B017Cu)

#define CapSense_BUTTON12_PTR2SNS_FLASH_VALUE               (CapSense_dsFlash.wdgtArray[12].ptr2SnsFlash)
#define CapSense_BUTTON12_PTR2SNS_FLASH_OFFSET              (384u)
#define CapSense_BUTTON12_PTR2SNS_FLASH_SIZE                (4u)
#define CapSense_BUTTON12_PTR2SNS_FLASH_PARAM_ID            (0xD40C0180u)

#define CapSense_BUTTON12_PTR2WD_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[12].ptr2WdgtRam)
#define CapSense_BUTTON12_PTR2WD_RAM_OFFSET                 (388u)
#define CapSense_BUTTON12_PTR2WD_RAM_SIZE                   (4u)
#define CapSense_BUTTON12_PTR2WD_RAM_PARAM_ID               (0xD50C0184u)

#define CapSense_BUTTON12_PTR2SNS_RAM_VALUE                 (CapSense_dsFlash.wdgtArray[12].ptr2SnsRam)
#define CapSense_BUTTON12_PTR2SNS_RAM_OFFSET                (392u)
#define CapSense_BUTTON12_PTR2SNS_RAM_SIZE                  (4u)
#define CapSense_BUTTON12_PTR2SNS_RAM_PARAM_ID              (0xD60C0188u)

#define CapSense_BUTTON12_PTR2FLTR_HISTORY_VALUE            (CapSense_dsFlash.wdgtArray[12].ptr2FltrHistory)
#define CapSense_BUTTON12_PTR2FLTR_HISTORY_OFFSET           (396u)
#define CapSense_BUTTON12_PTR2FLTR_HISTORY_SIZE             (4u)
#define CapSense_BUTTON12_PTR2FLTR_HISTORY_PARAM_ID         (0xD70C018Cu)

#define CapSense_BUTTON12_PTR2DEBOUNCE_VALUE                (CapSense_dsFlash.wdgtArray[12].ptr2DebounceArr)
#define CapSense_BUTTON12_PTR2DEBOUNCE_OFFSET               (400u)
#define CapSense_BUTTON12_PTR2DEBOUNCE_SIZE                 (4u)
#define CapSense_BUTTON12_PTR2DEBOUNCE_PARAM_ID             (0xD10C0190u)

#define CapSense_BUTTON12_STATIC_CONFIG_VALUE               (CapSense_dsFlash.wdgtArray[12].staticConfig)
#define CapSense_BUTTON12_STATIC_CONFIG_OFFSET              (404u)
#define CapSense_BUTTON12_STATIC_CONFIG_SIZE                (4u)
#define CapSense_BUTTON12_STATIC_CONFIG_PARAM_ID            (0xD00C0194u)

#define CapSense_BUTTON12_TOTAL_NUM_SNS_VALUE               (CapSense_dsFlash.wdgtArray[12].totalNumSns)
#define CapSense_BUTTON12_TOTAL_NUM_SNS_OFFSET              (408u)
#define CapSense_BUTTON12_TOTAL_NUM_SNS_SIZE                (2u)
#define CapSense_BUTTON12_TOTAL_NUM_SNS_PARAM_ID            (0x9C0C0198u)

#define CapSense_BUTTON12_TYPE_VALUE                        (CapSense_dsFlash.wdgtArray[12].wdgtType)
#define CapSense_BUTTON12_TYPE_OFFSET                       (410u)
#define CapSense_BUTTON12_TYPE_SIZE                         (1u)
#define CapSense_BUTTON12_TYPE_PARAM_ID                     (0x580C019Au)

#define CapSense_BUTTON12_NUM_COLS_VALUE                    (CapSense_dsFlash.wdgtArray[12].numCols)
#define CapSense_BUTTON12_NUM_COLS_OFFSET                   (411u)
#define CapSense_BUTTON12_NUM_COLS_SIZE                     (1u)
#define CapSense_BUTTON12_NUM_COLS_PARAM_ID                 (0x5E0C019Bu)

#define CapSense_BUTTON12_PTR2NOISE_ENVLP_VALUE             (CapSense_dsFlash.wdgtArray[12].ptr2NoiseEnvlp)
#define CapSense_BUTTON12_PTR2NOISE_ENVLP_OFFSET            (412u)
#define CapSense_BUTTON12_PTR2NOISE_ENVLP_SIZE              (4u)
#define CapSense_BUTTON12_PTR2NOISE_ENVLP_PARAM_ID          (0xD20C019Cu)

#define CapSense_BUTTON13_PTR2SNS_FLASH_VALUE               (CapSense_dsFlash.wdgtArray[13].ptr2SnsFlash)
#define CapSense_BUTTON13_PTR2SNS_FLASH_OFFSET              (416u)
#define CapSense_BUTTON13_PTR2SNS_FLASH_SIZE                (4u)
#define CapSense_BUTTON13_PTR2SNS_FLASH_PARAM_ID            (0xDD0D01A0u)

#define CapSense_BUTTON13_PTR2WD_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[13].ptr2WdgtRam)
#define CapSense_BUTTON13_PTR2WD_RAM_OFFSET                 (420u)
#define CapSense_BUTTON13_PTR2WD_RAM_SIZE                   (4u)
#define CapSense_BUTTON13_PTR2WD_RAM_PARAM_ID               (0xDC0D01A4u)

#define CapSense_BUTTON13_PTR2SNS_RAM_VALUE                 (CapSense_dsFlash.wdgtArray[13].ptr2SnsRam)
#define CapSense_BUTTON13_PTR2SNS_RAM_OFFSET                (424u)
#define CapSense_BUTTON13_PTR2SNS_RAM_SIZE                  (4u)
#define CapSense_BUTTON13_PTR2SNS_RAM_PARAM_ID              (0xDF0D01A8u)

#define CapSense_BUTTON13_PTR2FLTR_HISTORY_VALUE            (CapSense_dsFlash.wdgtArray[13].ptr2FltrHistory)
#define CapSense_BUTTON13_PTR2FLTR_HISTORY_OFFSET           (428u)
#define CapSense_BUTTON13_PTR2FLTR_HISTORY_SIZE             (4u)
#define CapSense_BUTTON13_PTR2FLTR_HISTORY_PARAM_ID         (0xDE0D01ACu)

#define CapSense_BUTTON13_PTR2DEBOUNCE_VALUE                (CapSense_dsFlash.wdgtArray[13].ptr2DebounceArr)
#define CapSense_BUTTON13_PTR2DEBOUNCE_OFFSET               (432u)
#define CapSense_BUTTON13_PTR2DEBOUNCE_SIZE                 (4u)
#define CapSense_BUTTON13_PTR2DEBOUNCE_PARAM_ID             (0xD80D01B0u)

#define CapSense_BUTTON13_STATIC_CONFIG_VALUE               (CapSense_dsFlash.wdgtArray[13].staticConfig)
#define CapSense_BUTTON13_STATIC_CONFIG_OFFSET              (436u)
#define CapSense_BUTTON13_STATIC_CONFIG_SIZE                (4u)
#define CapSense_BUTTON13_STATIC_CONFIG_PARAM_ID            (0xD90D01B4u)

#define CapSense_BUTTON13_TOTAL_NUM_SNS_VALUE               (CapSense_dsFlash.wdgtArray[13].totalNumSns)
#define CapSense_BUTTON13_TOTAL_NUM_SNS_OFFSET              (440u)
#define CapSense_BUTTON13_TOTAL_NUM_SNS_SIZE                (2u)
#define CapSense_BUTTON13_TOTAL_NUM_SNS_PARAM_ID            (0x950D01B8u)

#define CapSense_BUTTON13_TYPE_VALUE                        (CapSense_dsFlash.wdgtArray[13].wdgtType)
#define CapSense_BUTTON13_TYPE_OFFSET                       (442u)
#define CapSense_BUTTON13_TYPE_SIZE                         (1u)
#define CapSense_BUTTON13_TYPE_PARAM_ID                     (0x510D01BAu)

#define CapSense_BUTTON13_NUM_COLS_VALUE                    (CapSense_dsFlash.wdgtArray[13].numCols)
#define CapSense_BUTTON13_NUM_COLS_OFFSET                   (443u)
#define CapSense_BUTTON13_NUM_COLS_SIZE                     (1u)
#define CapSense_BUTTON13_NUM_COLS_PARAM_ID                 (0x570D01BBu)

#define CapSense_BUTTON13_PTR2NOISE_ENVLP_VALUE             (CapSense_dsFlash.wdgtArray[13].ptr2NoiseEnvlp)
#define CapSense_BUTTON13_PTR2NOISE_ENVLP_OFFSET            (444u)
#define CapSense_BUTTON13_PTR2NOISE_ENVLP_SIZE              (4u)
#define CapSense_BUTTON13_PTR2NOISE_ENVLP_PARAM_ID          (0xDB0D01BCu)

#define CapSense_BUTTON14_PTR2SNS_FLASH_VALUE               (CapSense_dsFlash.wdgtArray[14].ptr2SnsFlash)
#define CapSense_BUTTON14_PTR2SNS_FLASH_OFFSET              (448u)
#define CapSense_BUTTON14_PTR2SNS_FLASH_SIZE                (4u)
#define CapSense_BUTTON14_PTR2SNS_FLASH_PARAM_ID            (0xDF0E01C0u)

#define CapSense_BUTTON14_PTR2WD_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[14].ptr2WdgtRam)
#define CapSense_BUTTON14_PTR2WD_RAM_OFFSET                 (452u)
#define CapSense_BUTTON14_PTR2WD_RAM_SIZE                   (4u)
#define CapSense_BUTTON14_PTR2WD_RAM_PARAM_ID               (0xDE0E01C4u)

#define CapSense_BUTTON14_PTR2SNS_RAM_VALUE                 (CapSense_dsFlash.wdgtArray[14].ptr2SnsRam)
#define CapSense_BUTTON14_PTR2SNS_RAM_OFFSET                (456u)
#define CapSense_BUTTON14_PTR2SNS_RAM_SIZE                  (4u)
#define CapSense_BUTTON14_PTR2SNS_RAM_PARAM_ID              (0xDD0E01C8u)

#define CapSense_BUTTON14_PTR2FLTR_HISTORY_VALUE            (CapSense_dsFlash.wdgtArray[14].ptr2FltrHistory)
#define CapSense_BUTTON14_PTR2FLTR_HISTORY_OFFSET           (460u)
#define CapSense_BUTTON14_PTR2FLTR_HISTORY_SIZE             (4u)
#define CapSense_BUTTON14_PTR2FLTR_HISTORY_PARAM_ID         (0xDC0E01CCu)

#define CapSense_BUTTON14_PTR2DEBOUNCE_VALUE                (CapSense_dsFlash.wdgtArray[14].ptr2DebounceArr)
#define CapSense_BUTTON14_PTR2DEBOUNCE_OFFSET               (464u)
#define CapSense_BUTTON14_PTR2DEBOUNCE_SIZE                 (4u)
#define CapSense_BUTTON14_PTR2DEBOUNCE_PARAM_ID             (0xDA0E01D0u)

#define CapSense_BUTTON14_STATIC_CONFIG_VALUE               (CapSense_dsFlash.wdgtArray[14].staticConfig)
#define CapSense_BUTTON14_STATIC_CONFIG_OFFSET              (468u)
#define CapSense_BUTTON14_STATIC_CONFIG_SIZE                (4u)
#define CapSense_BUTTON14_STATIC_CONFIG_PARAM_ID            (0xDB0E01D4u)

#define CapSense_BUTTON14_TOTAL_NUM_SNS_VALUE               (CapSense_dsFlash.wdgtArray[14].totalNumSns)
#define CapSense_BUTTON14_TOTAL_NUM_SNS_OFFSET              (472u)
#define CapSense_BUTTON14_TOTAL_NUM_SNS_SIZE                (2u)
#define CapSense_BUTTON14_TOTAL_NUM_SNS_PARAM_ID            (0x970E01D8u)

#define CapSense_BUTTON14_TYPE_VALUE                        (CapSense_dsFlash.wdgtArray[14].wdgtType)
#define CapSense_BUTTON14_TYPE_OFFSET                       (474u)
#define CapSense_BUTTON14_TYPE_SIZE                         (1u)
#define CapSense_BUTTON14_TYPE_PARAM_ID                     (0x530E01DAu)

#define CapSense_BUTTON14_NUM_COLS_VALUE                    (CapSense_dsFlash.wdgtArray[14].numCols)
#define CapSense_BUTTON14_NUM_COLS_OFFSET                   (475u)
#define CapSense_BUTTON14_NUM_COLS_SIZE                     (1u)
#define CapSense_BUTTON14_NUM_COLS_PARAM_ID                 (0x550E01DBu)

#define CapSense_BUTTON14_PTR2NOISE_ENVLP_VALUE             (CapSense_dsFlash.wdgtArray[14].ptr2NoiseEnvlp)
#define CapSense_BUTTON14_PTR2NOISE_ENVLP_OFFSET            (476u)
#define CapSense_BUTTON14_PTR2NOISE_ENVLP_SIZE              (4u)
#define CapSense_BUTTON14_PTR2NOISE_ENVLP_PARAM_ID          (0xD90E01DCu)


#endif /* End CY_SENSE_CapSense_REGISTER_MAP_H */


/* [] END OF FILE */
