/*
 * @file main.c
 *
 * @brief Main source code for the Stopwatch_Design program.
 *
 * This file contains the main entry point and function definitions for the Stopwatch_Design program.
 * This lab involves designing a basic stopwatch. It demonstrates edge-triggered interrupts, 
 * and it interfaces with the following:
 *  - User LED (RGB) Tiva C Series TM4C123G LaunchPad
 *	- EduBase Board LEDs (LED0 - LED3)
 *	- EduBase Board Push Buttons (SW2 - SW3)
 *	- EduBase Board Seven-Segment Display
 *	- PMOD BTN module
 *
 * It configures the pins used by the EduBase Board push buttons (SW2 and SW3) and the PMOD
 * BTN module to generate interrupts on rising edges.
 * 
 * Timer 0A is used to generate periodic interrupts every 1 millisecond. The values of the 
 * stopwatch (milliseconds, seconds, and minutes) will increment in the Timer 0A
 * periodic task. The PMOD BTN module will be used to control the stopwatch.
 *
 * @author
 */

int main(void)
{
	
	while(1)
	{

	}
}
