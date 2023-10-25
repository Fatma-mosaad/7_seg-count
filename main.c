/*
 * main.c

 *
 *  Created on: Oct 23, 2023
 *      Author: hp
 */
#include <avr/io.h>
#include <app.h>



void main(void)
{
	SEGEMNT_INIT();
	while(1)
	{
		SEMENT_DISPLAY();

	}
}


