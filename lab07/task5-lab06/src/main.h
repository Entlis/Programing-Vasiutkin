#include<stdlib.h>
#include<time.h>
#define N 3
void moveValue(int arrayIn[N][N]);
void moveValue(int arrayIn[N][N]) {
char arrayOut[N][N];
	for (int i = 0; i < N; i++) {//за допомгою додаткової змінної k перебираємо строки заданої матриці
		int k = arrayIn[i][0];
		for (int j = 0; j < N; j++) {//зміщуємо елементи масиву на 1 вправо
			arrayOut[i][j] = arrayIn[i][j + 1]; 
		}
		arrayOut[i][N - 1] = k;//закінчуємо зміщення елементів, ставлячи останній елемент на місце першого
	}
}
