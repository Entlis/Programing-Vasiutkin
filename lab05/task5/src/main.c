int main() 
{
	int a = 20;// Задане число
		// Через FOR
	int resultFOr = 0;
	for (int i = 0; i*i <= a; i++) {
		resultFOr = i;
	}
		// Через While
	int resultWhile = 0;
	int i = 0;
	while (i*i <= a) {
		i++;
		resultWhile = i - 1;
	}
		// Через Do While
	int resultDoWhile;
	int j = 0;
	do {
		j++;
		resultDoWhile = j - 1;
	} while (j * j <= a);
return 0;
}
