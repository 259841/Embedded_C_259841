#include "activity2.h"

void initADC()
{
   MuxReg=(1<<RefToVcc); // Aref=Avcc, set for 1024
   CntrlReg=(1<<EnableADC)|(7<<SetFCPU); // Enable ADC and Set for FCPU 128
}

uint16_t ReadADC(uint8_t select_channel)
{
   MuxReg&=0xf8;
   select_channel=select_channel&0b00000111;
   MuxReg|=select_channel;
   //Start single conversion
   CntrlReg|=(1<<StrtConv);
   //wait for conversion to complete
   while(!(CntrlReg&(1<<ADCInterruptFlag)));
   // clear ADIF by passing 1
   CntrlReg|=(1<<ADCInterruptFlag);
   return AtoDvalue;
}
