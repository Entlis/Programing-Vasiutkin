#include "main.h"
int main() {
	srand(time(NULL));

	int x = rand() % 23 + 2;
	int y = rand() % 23 + 2;
	
	int result_while = get_nod_while(x, y);//повертаємо результат функціїї
	int result_for = get_nod_for(x, y);//повертаємо результат функціїї
	int result_do = get_nod_do(x, y);//повертаємо результат функціїї

	return 0;
}

