#pragma once
#include <stdlib.h>
#include <time.h>

#define N 3 // розмір вхідного масиву N * N
 
void fillArr(float *pArr); // функція заповнення масиву випадковими речовинними числами
 
void maxColumnEl(float *pResult, float *pArr); // функція заповнення результуючого масиву максимальними елементами стовпців вхідного масиву
