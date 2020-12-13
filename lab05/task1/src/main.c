int main ()
{
	int num1 = 12;// Перше задане число
	int num2 = 17;// Друге задане число
	
		// Через FOR
	int resultA;
	for (int i = num1; i > 0; i--) {
		if (num1 % i == 0 && num2 % i == 0) {
			resultA= i;
			break;
		}
	} 
		// Через While
	int resultB;
	int j = num1;
	while (j > 0) {
		if (num1 % j == 0 && num2 % j == 0) {
			resultB = j;
			break;
		}
		j--;
	}
	
		// Через Do While
	int resultC;
	int k = num1;
	do {
		if (num1 % k == 0 && num2 % k == 0) {
			resultC = k;
			break;
		}	
		k--;
	} while (k > 0);
return 0;
}


