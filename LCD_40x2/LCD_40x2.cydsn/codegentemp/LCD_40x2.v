// ======================================================================
// LCD_40x2.v generated from TopDesign.cysch
// 12/24/2019 at 18:48
// This file is auto generated. ANY EDITS YOU MAKE MAY BE LOST WHEN THIS FILE IS REGENERATED!!!
// ======================================================================

`define CYDEV_CHIP_FAMILY_PSOC3 1
`define CYDEV_CHIP_FAMILY_PSOC4 2
`define CYDEV_CHIP_FAMILY_PSOC5 3
`define CYDEV_CHIP_FAMILY_PSOC6 4
`define CYDEV_CHIP_FAMILY_FM0P 5
`define CYDEV_CHIP_FAMILY_FM3 6
`define CYDEV_CHIP_FAMILY_FM4 7
`define CYDEV_CHIP_FAMILY_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_3A 1
`define CYDEV_CHIP_REVISION_3A_PRODUCTION 3
`define CYDEV_CHIP_REVISION_3A_ES3 3
`define CYDEV_CHIP_REVISION_3A_ES2 1
`define CYDEV_CHIP_REVISION_3A_ES1 0
`define CYDEV_CHIP_MEMBER_5B 2
`define CYDEV_CHIP_REVISION_5B_PRODUCTION 0
`define CYDEV_CHIP_REVISION_5B_ES0 0
`define CYDEV_CHIP_MEMBER_5A 3
`define CYDEV_CHIP_REVISION_5A_PRODUCTION 1
`define CYDEV_CHIP_REVISION_5A_ES1 1
`define CYDEV_CHIP_REVISION_5A_ES0 0
`define CYDEV_CHIP_MEMBER_4G 4
`define CYDEV_CHIP_REVISION_4G_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4G_ES 17
`define CYDEV_CHIP_REVISION_4G_ES2 33
`define CYDEV_CHIP_MEMBER_4U 5
`define CYDEV_CHIP_REVISION_4U_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4E 6
`define CYDEV_CHIP_REVISION_4E_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0
`define CYDEV_CHIP_MEMBER_4O 7
`define CYDEV_CHIP_REVISION_4O_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4R 8
`define CYDEV_CHIP_REVISION_4R_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4T 9
`define CYDEV_CHIP_REVISION_4T_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4N 10
`define CYDEV_CHIP_REVISION_4N_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4S 11
`define CYDEV_CHIP_REVISION_4S_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4Q 12
`define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4D 13
`define CYDEV_CHIP_REVISION_4D_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4J 14
`define CYDEV_CHIP_REVISION_4J_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4K 15
`define CYDEV_CHIP_REVISION_4K_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4V 16
`define CYDEV_CHIP_REVISION_4V_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4H 17
`define CYDEV_CHIP_REVISION_4H_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4A 18
`define CYDEV_CHIP_REVISION_4A_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4A_ES0 17
`define CYDEV_CHIP_MEMBER_4F 19
`define CYDEV_CHIP_REVISION_4F_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0
`define CYDEV_CHIP_MEMBER_4P 20
`define CYDEV_CHIP_REVISION_4P_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4M 21
`define CYDEV_CHIP_REVISION_4M_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4L 22
`define CYDEV_CHIP_REVISION_4L_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4I 23
`define CYDEV_CHIP_REVISION_4I_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_6A 24
`define CYDEV_CHIP_REVISION_6A_ES 17
`define CYDEV_CHIP_REVISION_6A_PRODUCTION 33
`define CYDEV_CHIP_REVISION_6A_NO_UDB 33
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 25
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 26
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 27
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM3 28
`define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM4 29
`define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0
`define CYDEV_CHIP_FAMILY_USED 2
`define CYDEV_CHIP_MEMBER_USED 19
`define CYDEV_CHIP_REVISION_USED 0
// CharLCD_v2_20(ConversionRoutines=false, CUSTOM0="0,E,8,8,8,E,0,0,", CUSTOM1="0,A,A,4,4,4,0,0,", CUSTOM2="0,E,A,E,8,8,0,0,", CUSTOM3="0,E,A,C,A,A,0,0,", CUSTOM4="0,E,8,C,8,E,0,0,", CUSTOM5="0,E,8,E,2,E,0,0,", CUSTOM6="0,E,8,E,2,E,0,0,", CUSTOM7="0,4,4,4,0,4,0,0,", CustomCharacterSet=2, TypeReplacementString=uint32, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=CharLCD_v2_20, CY_CONFIG_TITLE=LCD, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=LCD, CY_INSTANCE_SHORT_NAME=LCD, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=20, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.2, INSTANCE_NAME=LCD, )
module CharLCD_v2_20_0 ;



	wire [6:0] tmpOE__LCDPort_net;
	wire [6:0] tmpFB_6__LCDPort_net;
	wire [6:0] tmpIO_6__LCDPort_net;
	wire [0:0] tmpINTERRUPT_0__LCDPort_net;
	electrical [0:0] tmpSIOVREF__LCDPort_net;

	cy_psoc3_pins_v1_10
		#(.id("c9ce2be9-ef37-40d7-a46c-17e7d2193233/ed092b9b-d398-4703-be89-cebf998501f6"),
		  .drive_mode(21'b110_110_110_110_110_110_110),
		  .ibuf_enabled(7'b1_1_1_1_1_1_1),
		  .init_dr_st(7'b0_0_0_0_0_0_0),
		  .input_clk_en(0),
		  .input_sync(7'b1_1_1_1_1_1_1),
		  .input_sync_mode(7'b0_0_0_0_0_0_0),
		  .intr_mode(14'b00_00_00_00_00_00_00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(",,,,,,"),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(7'b0_0_0_0_0_0_0),
		  .oe_reset(0),
		  .oe_sync(7'b0_0_0_0_0_0_0),
		  .output_clk_en(0),
		  .output_clock_mode(7'b0_0_0_0_0_0_0),
		  .output_conn(7'b0_0_0_0_0_0_0),
		  .output_mode(7'b0_0_0_0_0_0_0),
		  .output_reset(0),
		  .output_sync(7'b0_0_0_0_0_0_0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(",,,,,,"),
		  .pin_mode("OOOOOOO"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(7'b1_1_1_1_1_1_1),
		  .sio_ibuf(""),
		  .sio_info(14'b00_00_00_00_00_00_00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(7'b0_0_0_0_0_0_0),
		  .spanning(0),
		  .use_annotation(7'b0_0_0_0_0_0_0),
		  .vtrip(14'b10_10_10_10_10_10_10),
		  .width(7),
		  .ovt_hyst_trim(7'b0_0_0_0_0_0_0),
		  .ovt_needed(7'b0_0_0_0_0_0_0),
		  .ovt_slew_control(14'b00_00_00_00_00_00_00),
		  .input_buffer_sel(14'b00_00_00_00_00_00_00))
		LCDPort
		 (.oe(tmpOE__LCDPort_net),
		  .y({7'b0}),
		  .fb({tmpFB_6__LCDPort_net[6:0]}),
		  .io({tmpIO_6__LCDPort_net[6:0]}),
		  .siovref(tmpSIOVREF__LCDPort_net),
		  .interrupt({tmpINTERRUPT_0__LCDPort_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__LCDPort_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{7'b1111111} : {7'b1111111};



endmodule

// top
module top ;

    electrical  RS;
    electrical  Net_86;
    electrical  Net_85;
    electrical  Net_84;
    electrical  D_2;
    electrical  Net_83;
    electrical  D_1;
    electrical  Net_82;
    electrical  Net_81;
    electrical  RW;
    electrical  Net_80;
    electrical  E;
    electrical  D_3;
    electrical  D_0;
    electrical  Net_98;
    electrical  Net_121;
    electrical  Net_116;
    electrical  Net_19;

    CharLCD_v2_20_0 LCD ();

    cy_annotation_universal_v1_0 TP_1 (
        .connect({
            Net_80
        })
    );
    defparam TP_1.comp_name = "TestPoint_v1_0";
    defparam TP_1.port_names = "T1";
    defparam TP_1.width = 1;

    cy_annotation_universal_v1_0 TP_10 (
        .connect({
            Net_81
        })
    );
    defparam TP_10.comp_name = "TestPoint_v1_0";
    defparam TP_10.port_names = "T1";
    defparam TP_10.width = 1;

    cy_annotation_universal_v1_0 TP_11 (
        .connect({
            Net_82
        })
    );
    defparam TP_11.comp_name = "TestPoint_v1_0";
    defparam TP_11.port_names = "T1";
    defparam TP_11.width = 1;

    cy_annotation_universal_v1_0 TP_13 (
        .connect({
            D_0
        })
    );
    defparam TP_13.comp_name = "TestPoint_v1_0";
    defparam TP_13.port_names = "T1";
    defparam TP_13.width = 1;

    cy_annotation_universal_v1_0 TP_12 (
        .connect({
            Net_83
        })
    );
    defparam TP_12.comp_name = "TestPoint_v1_0";
    defparam TP_12.port_names = "T1";
    defparam TP_12.width = 1;

    cy_annotation_universal_v1_0 TP_2 (
        .connect({
            Net_19
        })
    );
    defparam TP_2.comp_name = "TestPoint_v1_0";
    defparam TP_2.port_names = "T1";
    defparam TP_2.width = 1;

    cy_annotation_universal_v1_0 TP_3 (
        .connect({
            Net_116
        })
    );
    defparam TP_3.comp_name = "TestPoint_v1_0";
    defparam TP_3.port_names = "T1";
    defparam TP_3.width = 1;

    cy_annotation_universal_v1_0 TP_4 (
        .connect({
            RS
        })
    );
    defparam TP_4.comp_name = "TestPoint_v1_0";
    defparam TP_4.port_names = "T1";
    defparam TP_4.width = 1;

    cy_annotation_universal_v1_0 TP_5 (
        .connect({
            RW
        })
    );
    defparam TP_5.comp_name = "TestPoint_v1_0";
    defparam TP_5.port_names = "T1";
    defparam TP_5.width = 1;

    cy_annotation_universal_v1_0 TP_6 (
        .connect({
            E
        })
    );
    defparam TP_6.comp_name = "TestPoint_v1_0";
    defparam TP_6.port_names = "T1";
    defparam TP_6.width = 1;

    cy_annotation_universal_v1_0 TP_7 (
        .connect({
            Net_84
        })
    );
    defparam TP_7.comp_name = "TestPoint_v1_0";
    defparam TP_7.port_names = "T1";
    defparam TP_7.width = 1;

    cy_annotation_universal_v1_0 GND_2 (
        .connect({
            Net_80
        })
    );
    defparam GND_2.comp_name = "Gnd_v1_0";
    defparam GND_2.port_names = "T1";
    defparam GND_2.width = 1;

    cy_annotation_universal_v1_0 R2 (
        .connect({
            Net_121,
            Net_116
        })
    );
    defparam R2.comp_name = "Resistor_v1_0";
    defparam R2.port_names = "T1, T2";
    defparam R2.width = 2;

    cy_annotation_universal_v1_0 R1 (
        .connect({
            Net_116,
            Net_98
        })
    );
    defparam R1.comp_name = "Resistor_v1_0";
    defparam R1.port_names = "T1, T2";
    defparam R1.width = 2;

    cy_annotation_universal_v1_0 GND_3 (
        .connect({
            Net_98
        })
    );
    defparam GND_3.comp_name = "Gnd_v1_0";
    defparam GND_3.port_names = "T1";
    defparam GND_3.width = 1;

    cy_annotation_universal_v1_0 PWR_2 (
        .connect({
            Net_121
        })
    );
    defparam PWR_2.comp_name = "Power_v1_0";
    defparam PWR_2.port_names = "T1";
    defparam PWR_2.width = 1;

    cy_annotation_universal_v1_0 PWR_1 (
        .connect({
            Net_19
        })
    );
    defparam PWR_1.comp_name = "Power_v1_0";
    defparam PWR_1.port_names = "T1";
    defparam PWR_1.width = 1;

    cy_annotation_universal_v1_0 TP_14 (
        .connect({
            D_1
        })
    );
    defparam TP_14.comp_name = "TestPoint_v1_0";
    defparam TP_14.port_names = "T1";
    defparam TP_14.width = 1;

    cy_annotation_universal_v1_0 TP_15 (
        .connect({
            D_2
        })
    );
    defparam TP_15.comp_name = "TestPoint_v1_0";
    defparam TP_15.port_names = "T1";
    defparam TP_15.width = 1;

    cy_annotation_universal_v1_0 TP_16 (
        .connect({
            D_3
        })
    );
    defparam TP_16.comp_name = "TestPoint_v1_0";
    defparam TP_16.port_names = "T1";
    defparam TP_16.width = 1;

    cy_annotation_universal_v1_0 TP_17 (
        .connect({
            Net_85
        })
    );
    defparam TP_17.comp_name = "TestPoint_v1_0";
    defparam TP_17.port_names = "T1";
    defparam TP_17.width = 1;

    cy_annotation_universal_v1_0 TP_18 (
        .connect({
            Net_86
        })
    );
    defparam TP_18.comp_name = "TestPoint_v1_0";
    defparam TP_18.port_names = "T1";
    defparam TP_18.width = 1;



endmodule

