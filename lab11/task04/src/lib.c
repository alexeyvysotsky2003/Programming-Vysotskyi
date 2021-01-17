/**
 * @file lib.c
 * @brief Файл з реалізацією функцій
 *
 * @author Vysotskyi O.
 * @date 16-jan-2021
 * @version 1.0
 */

#include "lib.h"

void fillingArr(int *pArr) { // заповнення вхідного масиву випадковими числами
	for (int i = 0; i < N * N; i++) {
		*(pArr + i) = rand() % 20;
	}
}

void mainDiagonal(int *pResult, int *pArr) { // заповнення результуючого масиву числами головної діагоналі матриці
	for (int i = 0; i < N; i++) {
		*(pResult + i) = *(pArr + i * (N + 1));
	}
}

void sort(int *pResult){ // сортування чисел результуючого масиву у порядку зростання
	int temp = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (*(pResult + i) < *(pResult + j)) {
				temp = *(pResult + i);
				*(pResult + i) = *(pResult + j);
				*(pResult + j) = temp;
			}
		}   
    	}
}
