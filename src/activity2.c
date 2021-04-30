#include "activity2.h"

void initADC()
{
    ADMUX = (1<<REFS0);
    ADCSRA = (1<<ADEN)|(7<<ADPS0);
}

uint16_t ReadADC(uint8_t ch)
{
    ADMUX &= 0xf8;
    ch = ch&0b00000111;
    ADMUX |= ch;
    //start conversion
    ADCSRA |= (1<<ADSC);
    //wait for conversion to complete
    while(!(ADCSRA&(1<<ADIF)));
    //clear ADIF by writing 1
    ADCSRA |= (1<<ADIF);
    return(ADC);
}
