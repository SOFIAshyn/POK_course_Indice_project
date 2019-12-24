-- ======================================================================
-- CapSense_15_Buttons.ctl generated from CapSense_15_Buttons
-- 12/24/2019 at 17:10
-- This file is auto generated. ANY EDITS YOU MAKE MAY BE LOST WHEN THIS FILE IS REGENERATED!!!
-- ======================================================================

-- TopDesign
-- =============================================================================
-- The following directives assign pins to the locations specific for the
-- PSoC 4000S Plus device.
-- =============================================================================

-- === CapSense ===
attribute port_location of \CapSense:CintA(0)\  : label is "PORT(4,2)";
attribute port_location of \CapSense:CintB(0)\  : label is "PORT(4,3)";
attribute port_location of \CapSense:Cmod(0)\   : label is "PORT(4,1)";
attribute port_location of \CapSense:Rx(0)\     : label is "PORT(1,4)";
attribute port_location of \CapSense:Sns(0)\    : label is "PORT(1,5)";
attribute port_location of \CapSense:Tx(0)\     : label is "PORT(1,3)";

--- === I2C ===
attribute port_location of \EZI2C:scl(0)\       : label is "PORT(1,0)";
attribute port_location of \EZI2C:sda(0)\       : label is "PORT(1,1)";

--- === LEDs ===
attribute port_location of LED11(0)             : label is "PORT(3,4)";
attribute port_location of LED12(0)             : label is "PORT(3,5)";
-- PSoC Clock Editor
-- Directives Editor
-- Analog Device Editor
