int main()
{
	char text[] = "I love eat"; // Введений текст
	int space = 0; // кількість пробілів в тексті
	
	int size = sizeof(text) / sizeof(text[0]); // Кількість символів в масиві
	
	for (int i = 0; i < size; i++) { // Рахуемо общу кількість пробілів
		if (text[i] == ' ' || text[i] == '\0') {
			space += 1;
		}
	}
	
	int dblspace = 0; // Кількість двойних пробілів в масиві
	
	for (int i = 0; i <= size; i++) { // Рахуемо общу кількість двойних пробілів в масиві
		if ((text[i] == ' ' && text[i+1] == ' ') || (text[i] == ' ' && text[i+1] == '\0')) {
			dblspace += 1;
		}
	} 
	
	int amountOfWords = 0; // Лічиліник слів в масиві
	amountOfWords = space - dblspace;
	
	return 0;
}

