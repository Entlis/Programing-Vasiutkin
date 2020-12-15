#include "main.h"
int main() {

	srand(time(NULL));
	int x = rand() % 25 + 3;//генерація числа

	int result_for = get_num_type_for(x);
	int result_while =  get_num_type_while(x);
	int result_do =  get_num_type_do(x);
	return 0;
}
