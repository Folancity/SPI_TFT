



// SPI Definitions

#define SPI_HANDLE     // Important -- Spi_handle you are using
#define






/* 
 [ S| A2 | A1 | A0 | MODE | SER/DFR | PD1 | PD0 ]

*/
//Bit masks
#define XPT2046_START_BIT 	0x01 << 7
#define XPT2046_A2			0x01 << 6
#define XPT2046_A1			0x01 << 5
#define XPT2046_A0			0x01 << 4
#define XPT2046_MODE		0x01 << 3 	// 1 = 8 bit 0 = 12 bit
#define XPT2046_REFERENCE   0x01 << 2 	// 1 = SER 0 = DFR
#define XPT2046_PD1			0x01 << 1
#define XPT2046_PD0			0x01 << 0

//The start bits

#define XPT2046_START_YES  XPT2046_START_BIT
#define XPT2046_START_NO	0x00

// The Channel
		//Ser options
#define XPT2046_SER_TEMP0_POSITION		0x00
#define XPT2046_SER_VBAT_POSITION		XPT2046_A1
#define XPT2046_SER_AUXIN_POSITION		XPT2046_A2 | XPT2046_A1
#define XPT2046_SER_TEMP1_POSITION		XPT2046_A2 | XPT2046_A1 | XPT2046_A0


#define XPT2046_SER_Y_POSITION			XPT2046_A0
#define XPT2046_SER_X_POSITION 			XPT2046_A2 | XPT2046_A0
#define XPT2046_SER_Z1_POSITION			XPT2046_A1 | XPT2046_A0
#define XPT2046_SER_Z2_POSITION			XPT2046_A2 

		//Dfr options
#define XPT2046_DFR_Y_POSITION			XPT2046_A0
#define XPT2046_DFR_X_POSITION			XPT2046_A2 | XPT2046_A0
#define XPT2046_DFR_Z1_POSITION			XPT2046_A1 | XPT2046_A0
#define XPT2046_DFR_Z2_POSITION			XPT2046_A2 


// The mode
#define XPT2046_8_BIT_MODE  	XPT2046_MODE
#define XPT2046_12_BIT_MODE		0x00

//Reference options
#define XPT2046_SER_REFERENCE	XPT2046_REFERENCE
#define XPT2046_DFR_REFERENCE 	0x00

//Power Bits
#define XPT2046_POWER_OFF			0x00
#define XPT2046_REF_OFF_ADC_ON		XPT2046_PD0 	
#define XPT2046_REF_ON_ADC_OFF		XPT2046_PD1
#define XPT2046_DEVICE_ON			XPT2046_PD0 | XPT2046_PD1


typedef struct ControlData{
	uint8_t start_bit ;
	uint8_t channel_bit; 
	uint8_t mode_bit;
	uint8_t reference_bit;
	uint8_t power_bit;

} Control_Data;


// Function Declarations
void XPT2046_Init();	//Initialise the Driver
void XPT2046_DeInit();  // DeInitialize the Driver

void Read_Data(uint8_t data); // 
void Send_Data(uint8_t data); // Send data to the XPT2046

