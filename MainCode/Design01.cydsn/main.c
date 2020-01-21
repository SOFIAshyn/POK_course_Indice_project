#include "project.h"
#include "string.h"
#include "stepper.h"
#include "stdlib.h"

uint16 lcd_i = 0;

// Braille display alphabet 
uint16 lcd_alphabet[8] = {LCD_CUSTOM_0, LCD_CUSTOM_1, LCD_CUSTOM_2, LCD_CUSTOM_3, LCD_CUSTOM_4, LCD_CUSTOM_5, LCD_CUSTOM_6, LCD_CUSTOM_7};

uint8 hands_position[60];


void print_num_sign(){
    
    // Prints number sign (26 - digit char) to the LCD
    
    LCD_Position(0u, lcd_i);
    LCD_PutChar(' ');
    
    LCD_Position(1u, lcd_i);
    LCD_PutChar(lcd_alphabet[hands_alphabet[26][0]]);
    LCD_Position(1u, lcd_i + 1);
    LCD_PutChar(lcd_alphabet[hands_alphabet[26][1]]);
    
    lcd_i += 2;
}

int main()
{
    CyGlobalIntEnable;
    LCD_PrintString("Indice");
    CyDelay(2000);
    LCD_ClearDisplay();
    
    for (int i=0; i< 60; i++) hands_position[i] = 7;
    
    LCD_Start(); 
    Pin_EN_Write(0);
    
    uint16 arr_steps[2] = {832, 1280};
    
    
    bool isNum = false;
    
    // Index of the string 
    uint16 letter_i = 0;
    
    // Letter in ascii for the hands_alphabet array
    int letter_ascii;
    
    uint8 letter;
    
    // 
    uint8 pos_l;
    uint8 pos_r;
    
    // Chars to print on LCD
    char br1;
    char br2;
    
    X_DIRECTION_ENUM dir;
    
    char *str = "OlegFarenyuk";
    
    if (!Stepper_Init()) 
    {
        LCD_PrintString("Error");
        while (1){}
    }  
    
    Counter_Motor_Steps_Start();
    

// Code for testing
    
//  while(1){
//    
//        Stepper_MoveX(false, MOTOR_2, DIR_CNTCLCKWISE, 175);
//        Stepper_MoveX(false, MOTOR_2, DIR_CLOCKWISE, 3650);
          // CyDelay(100000);
//    }

    
    
    // Move motor from the starting position
    Stepper_MoveX(false, MOTOR_2, DIR_CNTCLCKWISE, 175);
    Stepper_MoveX(false, MOTOR_2, DIR_CLOCKWISE, 3650);
    
    for(;;)
    {
        letter = str[letter_i];
        
        if (isdigit(letter)){
            if (!isNum){
               print_num_sign();
               isNum = true;
            }
            
            letter_ascii = (int)(letter) - '0';
            if (letter_ascii == 0){
                letter_ascii += 9;
            }
            else{
                letter_ascii -= 1;
            }
        } 
        else{
            isNum = false;
            letter_ascii = (int)tolower(letter) - 'a';
        }
        
        pos_l = hands_alphabet[letter_ascii][0];
        pos_r = hands_alphabet[letter_ascii][1];
        br1 = lcd_alphabet[pos_l];
        br2 = lcd_alphabet[pos_r];
        
        LCD_Position(0u, lcd_i);
        LCD_PutChar(letter);
        LCD_Position(1u, lcd_i);
        LCD_PutChar(br1);
        LCD_Position(1u, lcd_i + 1);
        LCD_PutChar(br2);
        
        if (pos_l > hands_position[letter_i * 2]){ 
            dir = DIR_CNTCLCKWISE;
        }
        else{
            dir = DIR_CLOCKWISE;
        }
        
      
        if (pos_l != hands_position[letter_i * 2 ]){
            Stepper_MoveX(false, MOTOR_1, dir, 640 * abs(pos_l - hands_position[letter_i * 2]));  // small motor
           
        }
        
        Stepper_MoveX(false, MOTOR_2, DIR_CLOCKWISE, arr_steps[0]);  // big motor
        hands_position[letter_i * 2] = pos_l;
        
        
        if (pos_r > hands_position[letter_i * 2 + 1]){ 
            dir = DIR_CNTCLCKWISE;
        }
        else{
            dir = DIR_CLOCKWISE;
        }
       
        
        if (pos_r != hands_position[letter_i * 2 + 1]){
            Stepper_MoveX(false, MOTOR_1, dir, 640 * abs(pos_r - hands_position[letter_i * 2 + 1]));  // small motor
        
        }
         Stepper_MoveX(false, MOTOR_2, DIR_CLOCKWISE, arr_steps[1]);  // big motor
        
        hands_position[letter_i * 2 + 1] = pos_r;
        
        
        
       
        lcd_i += 2;
        letter_i++;
        if (lcd_i == 40){
            lcd_i = 0;
            LCD_ClearDisplay();
        }
        if (letter_i == 12){
          //Stepper_MoveX(false, MOTOR_2, DIR_CNTCLCKWISE, 56000);
          
           break;
        }
        
        
    }
}
    


/* [] END OF FILE */
