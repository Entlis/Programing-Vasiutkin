#include "main.h"
int main() {
	srand(time(NULL));

	int matrix[N][N];//дана матриця NxN елементів

	for (int i = 0; i < N; i++) {//заповнюємо матрицю за допомогою рандому
		for (int j = 0; j < N; j++) {
			matrix[i][j] = rand() % 11 - 5;
		}
	}

	matrix_multiplier(matrix);//функція нічого не повертає, а лиш змінює задані елементи всередині себе

	return 0;
}
