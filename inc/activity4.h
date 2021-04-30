/**
 * @file activity4.h
 * @author Thirthashri
 * @brief Read input from Adc and display on oscilloscope
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED
/**
 *@note avr header file 
 */
#include <avr/io.h>
/**
 * @note delay header file
 */
#include <util/delay.h>

/**
 * @brief initialize the USART registers
 * 
 * @param ubrr_value Baud rate
 */
void USARTInit(uint16_t ubrr_value);
/**
 * @brief To write data through serial transmission
 * 
 * @param data input data to be transmitted
 */
void WriteCharUSART(char data);



#endif // ACTIVITY4_H_INCLUDED
