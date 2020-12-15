#include "main.h"
int main() {
	srand(time(NULL));
	
	char strIn[LEN];
	
	for (int i = 0; i < LEN - 1; i++) {
		strIn[i] = rand() % 39 + 32;//заповнюємо заданий масив рандомними символами
	}
	strIn[LEN - 1] = '\0';
	
	int numWords = getNumWords( strIn);
	

	return 0;
}
