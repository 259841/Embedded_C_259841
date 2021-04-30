#include "activity3.h"
#define DUTY_CYCLE(Percent) (1024*Percent/100)
void initializePWM()
{
    TCCR1A=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B=(1<<CS11)|(1<<WGM12)|(1<<CS10);
    DDRB|=(1<<PB1);
}

char PWMoutput(uint16_t value)
{
    char temp_value;
    if(value<=200)
    {
        PWMout=DUTY_CYCLE(20.0);
        temp_value=20;
        _delay_ms(20);
    }
    else if(value>200 && value<=500)
    {
        PWMout=DUTY_CYCLE(40.0);
        temp_value=25;
        _delay_ms(20);
    }
    else if(value>500 && value<=700)
    {
        PWMout=DUTY_CYCLE(70.0);
        temp_value=29;
        _delay_ms(20);
    }
    else if(value>700 && value<=1024)
    {
        PWMout=DUTY_CYCLE(95.0);
        temp_value=33;
        _delay_ms(20);
    }
    else
    {
        PWMout=0;
        temp_value=0;
    }
    return temp_value;
}
