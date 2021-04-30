#include "activity4.h"

void initUSART(uint16_t ubrr_value)
{
    SetBaudLow;
    SetBaudHigh;
    SetCharBits;
    EnableReceiverAndTransmitter;
}


void WriteCharUSART(char data)
{
    while(WaitForTransmissionReady)
    {
        //Do nothing
    }
    ReadOrWriteData=data;
}
