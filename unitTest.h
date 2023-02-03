//
// Created by mremond on 19/01/2023.
//

#ifndef AES_ENCRYPTION_UNITTESTS_H
#define AES_ENCRYPTION_UNITTESTS_H

#include "cipher.h"

int testAddRoundKey();
int testSubBytes();
int testInvSubBytes();
int testShiftRows();
int testInvShiftRows();
int testMixColumns();
int testInvMixColumns();

#endif //AES_ENCRYPTION_UNITTESTS_H
