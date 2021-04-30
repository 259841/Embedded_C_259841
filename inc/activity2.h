/**
 * @file activity2.h
 * @author Thirthashri
 * @brief take analog input from potentiometer and store as digital value
 * @version 0.1
 * @date 2021-04-30
 *
 * @copyright Copyright (c) 2021
 *
 */
#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED
/**
 *@note avr header file
 */

#include <avr/io.h>
/**
 * @note delay header file
 */
#include <util/delay.h>
#define RefToVcc (REFS0)
#define EnableADC (ADEN)
#define SetFCPU (ADPS0)
#define MuxReg (ADMUX)
#define CntrlReg (ADCSRA)
#define StrtConv (ADSC)
#define ADCInterruptFlag (ADIF)
#define AtoDvalue (ADC)
/**
 * @brief Initalising for ADC conversion
 *
 */
void initADC();
/**
 * @brief convert the input analog value and return the digital value
 *
 * @param select_channel selects the channel(port) to connect for ADC conversion
 * @return uint16_t
 */
uint16_t ReadADC(uint8_t select_channel);
#endif // ACTIVITY2_H_INCLUDED
