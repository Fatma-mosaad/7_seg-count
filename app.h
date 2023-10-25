/*
 * app.h
 *
 *  Created on: Oct 22, 2023
 *      Author: hp
 */
#include "std_types.h"

#ifndef APP_H_
#define APP_H_
#define SevSeg_DATA_PORT_ID                PORTB_ID
#define SevSeg_E_PORT_ID                   PORTA_ID


#define SevSegA    PIN1_ID
#define SevSegB    PIN1_ID
#define SevSegC    PIN2_ID
#define SevSegD    PIN4_ID
#define SevSeg1_Enable1    PIN3_ID
#define  SevSeg1_Enable2   PIN2_ID
#define SevSeg1_Enable3    PIN5_ID
#define SevSeg1_Enable4    PIN6_ID
void SEGEMNT_INIT(void);
void SEMENT_DISPLAY(unsigned char num);
void SegBCD_vInit(void);

void SegBSD_vWriteVal(uint8 Copy_u8Num);

void SegBSD_vWriteValMUX(uint32 Copy_u32Num);

uint8 Choose_Seg(uint8 num);

 void SegBSD_vTime(void);


#endif /* APP_H_ */
