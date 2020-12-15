#include "main.h"
int main() {
	srand(time(NULL));

	int arrayIn[N][N];//дана матриця NxN елементів

	for (int i = 0; i < N; i++) {//заповнюємо матрицю за допомогою рандому
		for (int j = 0; j < N; j++) {
			arrayIn[i][j] = rand() % 11 - 5;
		}
	}
	
	moveValue(arrayIn);//функція нічого не повертає, лиш змінює значення всередині себе
	return 0;
}
