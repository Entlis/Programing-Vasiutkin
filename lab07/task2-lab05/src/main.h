#include <stdlib.h>
#include <time.h>
int define_prime_num_for(int num);//попередній виклик функції
int define_prime_num_while(int num);//попередній виклик функції
int define_prime_num_do(int num);//попередній виклик функції

int define_prime_num_for(int num) {
	int temp_for  = 0;
	int result_for = -1;
	for (int i = 2; i < num; i++) {/*якщо число ділиться націло (тобто остача від ділення =0) на число менше за нього, то воно складене*/
		temp_for = num % i;
		if (temp_for == 0) {
			result_for = -1;//число складене
			break;
		} else {
			result_for = 1;//число просте
		}
	}
	return result_for;
}

int define_prime_num_while(int num) {
	int i = 2;
	int temp_while = 0;
	int result_while = -1;
	while (i < num) {
		temp_while = num % i;
		if (temp_while == 0) {
			result_while = -1;//число складене
			break;
		} else {
			result_while = 1;//число просте
		}
		i++;
	}
	return result_while;
}

int define_prime_num_do(num) {
	int j = 2;
	int temp_do = 0;
	int result_do = -1;
	do  {
		temp_do = num % j;
		if (temp_do == 0) {
			result_do = -1;//число складене
			break;
		} else {
			result_do = 1;//число просте
		}
		j++;
	} while (j < num);
	return result_do;
}
