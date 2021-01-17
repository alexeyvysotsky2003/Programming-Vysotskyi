/**
 * @mainpage
 * # Загальне завдання
 * У кожному рядку тексту змінити порядок символів на протилежний.
 *
 * @author Vysotskyi O.
 * @date 17-jan-2021
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з головною функцією main, що містить вхідну строку, викликає функцію reverseStr.
 *
 * @author Vysotskyi O.
 * @date 17-jan-2021
 * @version 1.0
 */

#include "lib.h"

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення масиву string - строки
 * - зміна порядку символів вхідного масиву на протилежний шляхом виклика функції
 * {@link reverseStr}
 * @return успішний код повернення з програми (0)
 */

int main() {
/**
 * @param[in, out] string - строка
*/	
	char string[] = "Hello qwerty 123";
	
	reverseStr (string);

	return 0;
}
