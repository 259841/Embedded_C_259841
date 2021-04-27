#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
    DDRB |= (1<<PB0);                     //Output is 1st pin of PORTB
    DDRD = 0x00;                          //Input is all pins of PORTD
    PORTB &=~(1<<PB0);                    //Led is turned off
    while(1){                             //To analyze if button sensor is ON or OFF
        if((PIND & 1<<PD2)){
            if((PIND & 1<<PD4)){
                PORTB |= (1<<PB0);        //LED turned ON
            }
            else PORTB &=~(1<<PB0);       //LED turned OFF
        }
        else PORTB &=~(1<<PB0);           //LED turned OFF
    }
    return 0;
}
