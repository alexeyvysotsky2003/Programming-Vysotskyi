/**
 * @file lib.c
 * @brief Файл з реалізацією функцій
 *
 * @author Vysotskyi O.
 * @date 17-jan-2021
 * @version 1.0
 */

#include "lib.h"

void reverseStr (char *str) { 
	int size = strlen(str);
	char *copyStr = strdup(str);
	for (int i = 0; i < size; i++) {
		*(str + i) = *(copyStr + size - i - 1);
	}
}
