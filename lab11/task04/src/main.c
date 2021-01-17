/**
 * @mainpage
 * # Загальне завдання
 * 1. Дано масив масивів з N * N цілих чисел. Елементи головної діагоналі записати в одновимірний масив, отриманий масив упорядкувати за зростанням.
 *
 * @author Vysotskyi O.
 * @date 16-jan-2021
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з головною функцією main, що задає розмір масивам, викликає функції fillingArr, mainDiagonal, sort.
 *
 * @author Vysotskyi O.
 * @date 16-jan-2021
 * @version 1.0
 */

#include "lib.h"
#include <malloc.h>

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення масиву matrix - масиву масивів з числами
 * - створення масиву mainDiag - результуючого масиву
 * - генерація випадкових чисел для масиву matrix шляхом виклика функції
 * {@link fillingArr}
 * - заповнення масиву mainDiag елементами головної діагоналі масиву matrix шляхом виклика функції
 * {@link mainDiagonal}
 * - упорядкування за зростанням чисел результуючого масиву шляхом виклика функції
 * {@link sort}
 * @return успішний код повернення з програми (0)
 */

int main() {
/**
 * @param[in, out] matrix - масив масивів з числами
 * @param[in, out] mainDiag - результуючий масив з елементами головної діагоналі вхідного масиву
*/
	srand(time(NULL));
	
	int matrix[N][N] = {0};
	int mainDiag[N] = {0};

	fillingArr(matrix);

	mainDiagonal(mainDiag, matrix);
    
	sort(mainDiag);
	
	return 0;
}
