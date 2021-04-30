#include "activity1.h"
void initialize_pins()
{
    DDRB |= (1<<PB0);//set as output
    DDRD &= ~(1<<PD0);//set as input
    DDRD &= ~(1<<PD1);//set as input
    PORTD |= (1<<PD0);//set bit
    PORTD |= (1<<PD1);//set bit
}
void turn_on_led()
{
  //turn on the LED
   PORTB |= (1<<PB0);
}
void turn_off_led()
{
  //turn off the LED
   PORTB |= ~(1<<PB0);
}
