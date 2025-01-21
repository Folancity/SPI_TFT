
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

#include "XPT2046.h"


void XPT2046_Init(){
ControlData InstructionByte; 


	InstructionByte.start_bit = XPT2046_START_YES; 
	InstructionByte.channel_bit = ;
	InstructionByte.mode_bit = XPT2046_8_BIT_MODE;
	InstructionByte.reference_bit = XPT2046_SER_REFERENCE;
	InstructionByte.power_bit;

}
void XPT2046_DeInit(){


}


void Read_Data(uint8_t Instruction){

	//TxData = Instruction to send
	//RxData = Receive Data from 
	uint8_t TxData = Instruction; 
	uint8_t RxData = 0;

	
	HAL_SPI_TransmitReceive( SPI_HANDLE, &TxData, &RxData, 1,  HAL_MAX_DELAY);
}


int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}