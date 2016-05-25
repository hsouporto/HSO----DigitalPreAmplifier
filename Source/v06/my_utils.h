#include <avr/io.h>




/************************************************************************/
/* @UsartSendDecimal                                                    */
/************************************************************************/
void sendDecUSART(uint8_t value);
/************************************************************************/
/* @UsartSendHex                                                    */
/************************************************************************/
void sendHexUSART(uint8_t value);

/************************************************************************/
/* @CalcHexNibble                                                       */
/************************************************************************/
void calc_hex_nibble(uint8_t nibble);
/************************************************************************/
/* @Usart Send Binary                                                   */
/************************************************************************/
void sendBinUSART(uint8_t value);