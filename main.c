#include <stdlib.h>// Библиотека для rand
#include <time.h>// Библиотека для time

#define N 11
int main () {
	srand (time(NULL));// Псевдо случайные числа
	char alfavit[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	int amountofletter[26] = {0};
	char verb[N] = {0};
	for (int i = 0; i < N; i++) {
		verb[i] = rand() % 27 + 65;// 26 символов от 65 до 92
	}
	for(int j = 0; j < N; j++) {
		for(int k = 0; k < N; k++) {
			if (alfavit[j] == verb [k])
			{
				amountofletter[j] += 1;
			}
		}
	}
return 0;
}
