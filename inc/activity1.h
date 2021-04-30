/**
 * @file activity1.h
 * @author Thirthashri
 * @brief Led will turn on if both switches are on
 * @version 0.1
 * @date 2021-04-30
 *
 * @copyright Copyright (c) 2021
 *
 */
#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED
/**
 *@note avr header file
 */
#include<avr/io.h>
#define INPUTPIN (PIND)
#define HEATERSWITCH (PD0)
#define SEATED (PD1)
/**
 * @brief Initializing the pins to input and output
 *
 */
void initialize_pins();
/**
 * @brief Logic to turn off Led
 *
 */
void turn_off_led();
/**
 * @brief Logic to turn on Led
 *
 */
void turn_on_led();

#endif // ACTIVITY1_H_INCLUDED
