int main()
{
	int a = 5;// Задане число
		// Через For
	int sumFor = 0;
	int resultFor;
	int tempFor;
	for (int i = 1; i < a; i++) {
		tempFor = a % i;
		if (tempFor == 0) {
			sumFor += i;
		}
	} 
	if (sumFor == a) {
		resultFor = 0; // 0 - Число досконале 
	} else if (sumFor != a) {
		resultFor = 1; // 1 - Число не досконале
	}
		// Через While
	int sumWhile = 0;
	int resultWhile;
	int tempWhile;
	int j = 1;
	while (j < a) {
		tempWhile = a % j;
		if (tempWhile == 0) {
			sumWhile += j;
		}
		j++;
	}
	if (sumWhile == a) {
		resultWhile = 0; // 0 - Число досконале 
	} else if (sumWhile != a) {
		resultWhile = 1; // 1 - Число не досконале
	}
		// Через Do While
	int sumDoWhile = 0;
	int resultDoWhile;
	int tempDoWhile;
	int k = 1;
	do {
		tempDoWhile = a % k;
		if (tempDoWhile == 0) {
			sumDoWhile += k;
		}
		k++;
	} while (k < a);
	if (sumDoWhile == a) {
		resultDoWhile = 0; // 0 - Число досконале 
	}else if (sumDoWhile != a)
	{
		resultDoWhile = 1; // 1 - Число не досконале
	}
	return 0;
}
