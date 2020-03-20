#ifndef FLASH_H
#define FLASH_H

#include "stm32f4xx_hal.h"
	
void SendByte(uint8_t);
uint8_t ReceiveByte(void);

void ReadDataArrayFromAddress(uint32_t,uint8_t*,uint16_t);
void WriteDataArrayWithAAI(uint32_t,uint8_t*,uint8_t);
void WriteToStatusRegister(uint8_t);
void Clear(void);

#endif
