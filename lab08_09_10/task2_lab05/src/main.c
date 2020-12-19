#include "main.h"
int main() {

	srand(time(0));

	int x = rand() % 26 + 3;//генерація числа, до якого будуть оприділятися прості числа

	int result_for = define_prime_num_for(x);//повертаємо функцію
	int result_while = define_prime_num_while(x);
	int result_do = define_prime_num_do(x);
	
	return 0;
}
