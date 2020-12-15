#include "main.h"
int main() {
	srand(time(NULL));
	
	int numForRootExtract = rand() % 49 + 3;//генерація числа, корінь якого треба знайти

	int result = rootExtract(numForRootExtract);//результат - функція від заданого числа

	return 0;
}
