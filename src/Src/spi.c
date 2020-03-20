#include "spi.h"

extern SPI_HandleTypeDef hspi1;

void SendByte(uint8_t data){
	HAL_SPI_Transmit(&hspi1, &data, 1, 0xffff);
}

uint8_t ReceiveByte(void){
	uint8_t data;
	
	HAL_SPI_Receive(&hspi1, &data, 1, 0xffff);
	return data;
}
