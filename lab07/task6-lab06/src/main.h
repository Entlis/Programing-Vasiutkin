#include<stdlib.h>
#include<time.h>
#define N 3

void matrix_multiplier(int matrixIn[N][N]);//попереднє оголошення функції

void matrix_multiplier(int matrixIn[N][N]) {
	int matrixOut[N][N];

	for (int i = 0; i < N; i++) {//цикл перебирає строки матриці
		for (int j = 0; j < N; j++) {//цикл перебирає стовпці маториці
			matrixOut[i][j] = 0;

			for (int k = 0; k < N; k++) {
				matrixOut[i][j] += matrixIn[i][k] * matrixIn[k][j];/*множимо матрицю саму на себе за правилом моження матриць: сума добутків елементу строки та відповідного елементу стовпця*/
			}

		}
	}

}
