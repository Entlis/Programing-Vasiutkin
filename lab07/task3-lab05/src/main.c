#include "main.h"
int main() {
	srand(time(NULL));
	
	int num = rand() % 899999 + 100000;//генерація псевдорандомного числа

	
	int result = compare_nums(num);//функція порівнює дві половини числа
	

	return 0;
}
