# Indice
## Device for distributing digital information into Braille font
#### Team, that works on this project:
- [Nazar Pasternak](https://github.com/heeveG)
- [Sofiia Petryshyn](https://github.com/SOFIAshyn)
- [Vitalii Papka](https://github.com/vitaliuchik)

***TODO:***
1. First Demo
    - Investigate existing competitors, improve the way of implementation
    - Design a mechanism
    - Collect details for the implementation
    - Calculate all the detail sizes according to the standarts
    - Try some examples with Stepper Motors, LCD Indicator, CapSense
    - Create a presentation
2. Second Demo
    - Implement main functions of the mechanism and understand how these things work
        - Do motors control
        - Control LCD display
        - Control CapSence
    - Write a documentation
3. Third Demo
    - Collect all the ready-for-usage examples into one project
    - Control motors with acceleration
    - Create an alphabet with Braille font inside PSoC Creator
    - Create a personal CapSense board sensors
    - Print details with a 3D-printer
    - Collect all the datails of the device into one project
___
### Modules
The device is based on [PSOC 4 BLE PIONER KIT](https://www.cypress.com/documentation/development-kitsboards/cy8ckit-042-ble-bluetooth-low-energy-42-compliant-pioneer-kit)
![](https://www.mouser.in/images/cypresssemiconductor/lrg/CY8CKIT-042BLE_t.jpg)
#### Stepper Motors
We use stepper motor Nema 13 to rotate gear wheel which shifts hands with dots and scallops. Also, we use stepper motor Nema 7 to move gear wheel along the row to change its position above the hands. 

Stepper motors are based on [Arduino CNC Shield v.3](https://www.openimpulse.com/blog/products-page/product-category/a4988-cnc-shield-v3-arduino/)

![](https://www.botshop.co.za/wp-content/uploads/2017/01/cnc-shield01.jpg)
#### LCD Display

*LCD Display 40x2*
![](https://picua.org/images/2020/01/21/b34dab65a0a8d6dbec03b4fab8d81c05.jpg)
We use LCD display for testing the device. While gear wheel is shifting hands, display are showing symbols and their Braille implementations below to compare if they match with received on hands.

LCD display is based on a self-made computer board.
![](https://picua.org/images/2020/01/21/ccb8cf8e2996cb176d65491c1f3ab37c.jpg) 
___
### Future plans
- Connect laser, and set all the hands to the base position at the beginning
- Set motors on a right position with opto-interrupter at the beginning
- Set all hands, to work correctly with the motor gear
- Set up capSense sensors along the hands
- Set a cover of the device
- Make a board to control the device
