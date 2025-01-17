
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





// Function Declarations
void XPT2046_Init();	//Initialise the Driver
void XPT2046_DeInit();  // DeInitialize the Driver

void Read_Data(uint8_t data); // 
void Send_Data(uint8_t data); // Send data to the XPT2046

