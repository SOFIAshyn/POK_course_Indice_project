#include <project.h>


#define LCD_ROWS                (2u)
#define LCD_COLUMNS             (40u)

#define BARGRAPH_DELAY_MS       (15u)



int main()
{
    uint8 row = 0u;
    uint8 column = 0u;
    uint8 length = 0u;
    
    /* Start the LCD */
    LCD_Start();

    /* Show the demo start message */
    LCD_Position(0u, 0u);
    LCD_PrintString("Demo started");
    CyDelay(1000u);

    /* Clear the LCD display */
    LCD_ClearDisplay();
    

    
    /* Wait for some time */
    CyDelay(500u);
    
    /* Show the demo completion message */
    LCD_Position(0u, 0u);
    LCD_PrintString(":.: .. ::");
    LCD_Position(1u, 0u);
    
    for(;;)
    {
        
    }
}

