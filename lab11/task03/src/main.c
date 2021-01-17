#include "lib.h"

int main() {
	srand(time(NULL));
    
	float matrix[N][N]; // вхідний масив, який заповнюється випадковими речовинними числами
	float result[N]; // результуючий масив з максимальними елементами стовпців вхідного масиву
    
	fillArr(matrix); // заповнення вхідного масиву
    
	maxColumnEl(result, matrix); // заповнення результуючого масиву

	return 0;
}
