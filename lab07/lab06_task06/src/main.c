#include <stdlib.h>
#include <time.h>
#define N 3 // розмір матриці N*N

void matrixSquared (int matrixA[N][N], int matrix2A[N][N]);
int main() {
	srand(time(NULL));
	int matrixA[N][N]; // матриця А
	int matrix2A[N][N]; // матриця А^2
	for (int i = 0; i < N; i++) { // заповнення масиву матриці
		for (int j = 0; j < N; j++) {
			matrixA[i][j] =  rand() % 20; // заповнення масиву псевдовипадковими числами від 0 до 20
		}
	}
	matrixSquared (matrixA, matrix2A);
	
	return 0;
}

void matrixSquared (int matrixA[N][N], int matrix2A[N][N]) {
	for (int i = 0; i < N; i++) { // множимо матрицю саму на себе відповідно до правил множення матриць
		for (int j = 0; j < N; j++) {
			matrix2A[i][j] = matrixA[i][0] * matrixA[0][j] + matrixA[i][1] * matrixA[1][j] + matrixA[i][2] * matrixA[2][j];
		}
	}
}
