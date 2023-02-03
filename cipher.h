//
// Created by mremond on 16/01/2023.
//

#ifndef AES_ENCRYPTION_CIPHER_H
#define AES_ENCRYPTION_CIPHER_H

#include "stdint.h"

typedef uint8_t byte_t;

void vCipherAES128(byte_t*, byte_t**);
void vEqInvCipherAES128(byte_t*, byte_t**);
void vInvCipherAES128(byte_t*, byte_t**);

void vAddRoundKey(byte_t*, byte_t*, uint8_t, uint8_t);
void vSubBytes(byte_t*, uint8_t, uint8_t);
void vShiftRows(byte_t*, uint8_t, uint8_t);

byte_t bXORTimes2(byte_t, byte_t);

void vMixColumns(byte_t*, uint8_t, uint8_t);


void vInvSubBytes(byte_t*, uint8_t, uint8_t);
void vInvShiftRows(byte_t*, uint8_t, uint8_t);
void vInvMixColumns(byte_t*, uint8_t, uint8_t);

void vSubWord(byte_t*, uint32_t);
void vRotWord(byte_t*, uint32_t);
void vRcon(byte_t*, uint32_t, uint32_t);

#endif //AES_ENCRYPTION_CIPHER_H
