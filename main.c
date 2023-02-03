/*
 * Filename: AES_Encryption.java
 *
 ********************************************************************__START_CR__**
 * Copyright 2013 MuTest SAS
 * The file, methods and architecture which are described or implemented below
 * belong to MuTest. They cannot be copied, distributed or used without express
 * and written permission from a legal representative of MuTest.
 * Patent may be pending.
 *********************************************************************__STOP_CR__**
 */

/*
 * File:   main.c
 * Author: mremond
 *
 * Created on 19 janvier 2023, 15:09
 */

#include <stdio.h>
#include <stdlib.h>

#include "unitTest.h"

/*
 *
 */
int main(int argc, char** argv) {

	int err = 0;

	err = testAddRoundKey();
	err = testSubBytes();
	err = testInvSubBytes();
	err = testShiftRows();
	err = testInvShiftRows();
	err = testMixColumns();
	err = testInvMixColumns();

	if (err == 0) {
		printf("hello world");
	}

	return (EXIT_SUCCESS);
}

