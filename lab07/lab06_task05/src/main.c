#include <stdlib.h>
#include <time.h>

#define N 3 // розмір матриці в N*N

void moveMatrixEl (int matrix [N][N]);

int main() {
	srand (time(NULL));
		
	int matrix [N][N];
	for (int i = 0; i < N; i++) { // заповнення масиву матриці
		for (int j = 0; j < N; j++) {
			matrix[i][j] = rand() % 20; // заповнення масиву псевдовипадковими числами від 0 до 20
		}
	}
	moveMatrixEl (matrix);
	
	return 0;
}

void moveMatrixEl (int matrix [N][N]) {
	for (int i = 0; i < N; i++) { // перебір рядка матриці
		int temp = matrix[i][0]; // зберігаємо перші елементи рядків матриці, бо вони будуть змінені
		for (int j = 0; j < N - 1; j++) { // перебір стовбця матриці
			matrix [i][j] = matrix [i][j+1]; //  кожному елементу матриці присвоюємо значення наступного елемента матриці
		}
		matrix[i][N-1] = temp; // переміщаємо елементи першого стовбця матриці в останній стовбець
	}
return 0;
}
