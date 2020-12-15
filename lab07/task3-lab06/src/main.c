#include "main.h"
int main() {
	srand(time(0));
	int numIn = rand() % 9999 + 1;
	char arr[50] = {0};/*усі дії у функції будуть проходити з цим масивом*/
	fillStr(arr, numIn);
	
	

	int compare;
	int count = 3;
	compare = compareNum(count, 1, 3, 2);
	return 0;
	}
