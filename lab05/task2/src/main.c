int main ()
{
	int a = 22; //Задане число
		// Через FOR
	int resultA = 0;
	
	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			resultA = 1; // Число не просте
		}
	}
		// Через While
	int resultB = 0;
	int i = 2;
	
	while (i < a) {
		if (a % i == 0) {
			resultB = 1; // Число не просте
		}
		i++;
	}
		// Через Do While
	int resultC = 0;
	int j = 2;
	
	do {
		if (a % j == 0) { 
			resultC = 1; // Число не просте
		}
		j++;
	} while (j < a);
return 0;
}
