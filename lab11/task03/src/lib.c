#include "lib.h"

void fillArr(float *pArr) { // заповнення вхідного масиву випадковими речовинними числами
	for (int i = 0; i < N * N; i++) {
		*(pArr + i) = (float) rand() / RAND_MAX * (5 - 0) + 0;
	}
}

void maxColumnEl(float *pResult, float *pArr) { // заповнення результуючого масиву максимальними елементами стовпців вхідного масиву
	float temp = 0;
	for (int i = 0; i < N; i++) { // сортування елементів кожного стовпця
		for (int j = 0; j < N; j++) { // сортування елементів стовпця у порядку зростання
			for (int k = 0; k < N; k++) {
				if (*(pArr + N * j + i) < *(pArr + k * N + i)) {
					temp = *(pArr + N * j + i);
					*(pArr + N * j + i) = *(pArr + k * N + i);
					*(pArr + k * N + i) = temp;
				}
			}   
    		}
    		*(pResult + i) = *(pArr + N * (N - 1) + i); // внесення у результуючий масив максимальних елементів стовпців
    	}
}
