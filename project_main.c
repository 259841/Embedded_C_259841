/**
 * @file project_main.c
 * @author Thirthashri 
 * @brief Heat controller system in a car 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

int main()
{
    initialize_pins();
    initADC();
    initializePWM();
    USARTInit(103);
    uint16_t temp;
    char disp_val;
    while(1)
    {
        if( !((INPUTPIN & (1<<HEATERSWITCH)) || (INPUTPIN & (1<<SEATED))))
        {
            turn_on_led();
            temp=ReadADC(0);
            disp_val= PWMoutput(temp);
            WriteCharUSART(disp_val);


        }
        else
        {
            turn_off_led();
            PWMout=0;
            disp_val=0;
            WriteCharUSART(disp_val);
            _delay_ms(200);
        }
    }
    return 0;
}

