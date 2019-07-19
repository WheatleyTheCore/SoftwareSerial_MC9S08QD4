

/* Include Prototypes for your library, if applicable */
/* #include "mylibrary.h" */



/*-----------------------------------------------------------------------*

	Place your 'C' library code here.
	
 *-----------------------------------------------------------------------*/
#include "Cpu.h"
#include "WAIT1.h"
#include "MCUC1.h"
#include "Serial.h"
#include "SWSerial.h"

void sendByte(uint8_t data) {
	uint8_t bitcount;
	Serial_ClrVal(); //Send StartBit
	serialDelay(); //Send ^^ for 104 microseconds(as the baud rate is in 9600 in this case)
	
	for (bitcount = 0; bitcount < 8; bitcount++) {
		Serial_PutVal(data & 0x01);
		serialDelay();
		data >>= 1;
	}
	Serial_SetVal();
	serialDelay();
	WAIT1_Waitms(1);
	return;
}

void serialDelay() {
	volatile int i;
	for (i=0; i<33; i++);
}

