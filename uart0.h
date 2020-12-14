#ifndef UART0_H_
#define UART0_H_


void usartInit();
void transmitByte(uint8_t data);
uint8_t receiveByte(void);
void printString(const char str[]);
void readString(char str[], uint8_t maxLength);



#endif /* UART0_H_ */
