/*
 * app.c
 *
 *  Created on: Oct 22, 2023
 *      Author: hp
 */
#include "app.h"
#include <util/delay.h> /* For the delay functions */
#include "common_macros.h" /* For GET_BIT Macro */
#include "gpio.h"

void SEGEMNT_INIT(void){
	GPIO_setupPinDirection(SevSeg_DATA_PORT_ID,SevSegA,PIN_OUTPUT);
	GPIO_setupPinDirection(SevSeg_DATA_PORT_ID,SevSegB,PIN_OUTPUT);
	GPIO_setupPinDirection(SevSeg_DATA_PORT_ID,SevSegC,PIN_OUTPUT);
	GPIO_setupPinDirection(SevSeg_DATA_PORT_ID,SevSegD,PIN_OUTPUT);
	GPIO_setupPinDirection(SevSeg_DATA_PORT_ID,SevSeg1_Enable3,PIN_OUTPUT);
	GPIO_setupPinDirection(SevSeg_DATA_PORT_ID,SevSeg1_Enable4,PIN_OUTPUT);
	GPIO_setupPinDirection(SevSeg_E_PORT_ID,SevSeg1_Enable1,PIN_OUTPUT);
	GPIO_setupPinDirection(SevSeg_E_PORT_ID,SevSeg1_Enable2,PIN_OUTPUT);



}

void SEMENT_DISPLAY(unsigned char num){
	uint8 arr[4]={0};
	for(uint8 i=0;i<4;i++){
		arr[i]=num%10;
		num/=10;

	}
	GPIO_writePin(SevSeg_DATA_PORT_ID,SevSegA,GET_BIT(arr[0],0));
	GPIO_writePin(SevSeg_DATA_PORT_ID,SevSegB,GET_BIT(arr[0],1));
	GPIO_writePin(SevSeg_DATA_PORT_ID,SevSegC,GET_BIT(arr[0],2));
	GPIO_writePin(SevSeg_DATA_PORT_ID,SevSegD,GET_BIT(arr[0],3));
	GPIO_writePin(SevSeg_E_PORT_ID,SevSeg1_Enable1,LOGIC_LOW);
	_delay_ms(3);
	GPIO_writePin(SevSeg_E_PORT_ID,SevSeg1_Enable1,LOGIC_HIGH);
	GPIO_writePin(SevSeg_DATA_PORT_ID,SevSegA,GET_BIT(arr[1],0));
	GPIO_writePin(SevSeg_DATA_PORT_ID,SevSegB,GET_BIT(arr[1],1));
	GPIO_writePin(SevSeg_DATA_PORT_ID,SevSegC,GET_BIT(arr[1],2));
	GPIO_writePin(SevSeg_DATA_PORT_ID,SevSegD,GET_BIT(arr[1],3));
	GPIO_writePin(SevSeg_E_PORT_ID,SevSeg1_Enable2,LOGIC_LOW);
	_delay_ms(3);
	GPIO_writePin(SevSeg_E_PORT_ID,SevSeg1_Enable2,LOGIC_HIGH);
	GPIO_writePin(SevSeg_DATA_PORT_ID,SevSegA,GET_BIT(arr[2],0));
	GPIO_writePin(SevSeg_DATA_PORT_ID,SevSegB,GET_BIT(arr[2],1));
	GPIO_writePin(SevSeg_DATA_PORT_ID,SevSegC,GET_BIT(arr[2],2));
	GPIO_writePin(SevSeg_DATA_PORT_ID,SevSegD,GET_BIT(arr[2],3));
	GPIO_writePin(SevSeg_E_PORT_ID,SevSeg1_Enable3,LOGIC_LOW);
	_delay_ms(3);
	GPIO_writePin(SevSeg_E_PORT_ID,SevSeg1_Enable3,LOGIC_HIGH);
	GPIO_writePin(SevSeg_DATA_PORT_ID,SevSegA,GET_BIT(arr[3],0));
	GPIO_writePin(SevSeg_DATA_PORT_ID,SevSegB,GET_BIT(arr[3],1));
	GPIO_writePin(SevSeg_DATA_PORT_ID,SevSegC,GET_BIT(arr[3],2));
	GPIO_writePin(SevSeg_DATA_PORT_ID,SevSegD,GET_BIT(arr[3],3));
	GPIO_writePin(SevSeg_E_PORT_ID,SevSeg1_Enable4,LOGIC_LOW);
	_delay_ms(3);
	GPIO_writePin(SevSeg_E_PORT_ID,SevSeg1_Enable4,LOGIC_HIGH);







}
