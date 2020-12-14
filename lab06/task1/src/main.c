int main()
{
	int a = 15 // Вказуемо кількість символів
	char filler = ('_'); // Вказиваемо заповнення
	char strIn[] = "Ivanov"; // Вводимо необхідний текст
	char strResult[a];
	int lenIn = 0; // Кількість елементів ісходного масива

	for (int i = 0; ; i++) { // Рахуемо кількість символів
		if (strIn[i] == '\0') { // Якщо елемент масива == '\o' - завершуе дію
			break;
		}
		else if (strIn[i] != 0) {
			lenIn++;
		}
	}

	int lenFiller = a - lenIn; // Вирахуемо скільки буде символів
	int halfLenFiller = lenFiller / 2; // Кількість символів перед тесктом

	for (int i = 0; i <= a; i++) { // Заповнюемо масив заповнювачем
		strResult[i] = filler;
	}
	
	for (int i = halfLenFiller; i < (halfLenFiller + lenIn); ) { // Записуемо текст в центр
		for (int j = 0; j < lenIn; j++) {
			strResult[i] = strIn[j];
			i++;
		}
	}

	return 0;
}
