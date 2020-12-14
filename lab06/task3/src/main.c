int main()
{
	int a = 3231; // Задане число
	char numResult[47] = {0};
	short size = 0;
	
	char zero[4] = {'z','e','r','o'};
	char one[3] = {'o','n','e'};
	char two[3] = {'t','w','o'};
	char three[5] = {'t','h','r','e','e'};
	char four[4] = {'f','o','u','r'};
	char five[4] = {'f','i','v','e'};
	char six[3] = {'s','i','x'};
	char seven[5] = {'s','e','v','e','n'};
	char eight[5] = {'e','i','g','h','t'};
	char nine[4] = {'n','i','n','e'};
	
	char decade[8] = {' ','d','e','c','a','d','e',' '};
	char hundred[9] = {' ','h','u','n','d','r','e','d',' '};
	char thousand[10] = {' ','t','h','o','u','s','a','n','d',' '};
	
	int num = a;
int iStart = 0;
	
	for (int i = 10000; i > 0; i /= 10) { // Вказуемо кількість символів в NUM и записуемо в кількість size
			if ((num % i) != num) {
				size++;
			}
			num %= i;
		}
	}
	
	if (size == 4) { // Якщо size == 4 , т.е. задане число 4-х значне - записуемо в тисячі
		num = a / 1000;
		switch (num) {
		case 1: 
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = one[t];
				iStart++;
			}
			break;
		case 2: 
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = two[t];
				iStart++;
			}
			break;
		case 3: 
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = three[t];
				iStart++;
			}
			break;
		case 4: 
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = four[t];
				iStart++;
			}
			break;
		case 5: 
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = five[t];
				iStart++;
			}
			break;
		case 6: 
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = six[t];
				iStart++;
			}
			break;
		case 7: 
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = seven[t];
				iStart++;
			}
			break;
		case 8: 
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = eight[t];
				iStart++;
			}
			break;
		case 9: 
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = nine[t];
				iStart++;
			}
			break;	
		}
		for (int th = 0; th < 10; th++, iStart++) { // Додаем частину THOUSAND
			numResult[iStart] = thousand[th];
		}
		size--; // Віднімаемо от size 1, т.е. переходимо на сотні
		num = a % 1000;
	}
	
	if (size == 3) {// якщо size == 3 - записуемо сотні
		num = num / 100;
		switch (num) {
		case 0:
			break;
		case 1:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = one[t];
				iStart++;
			}
			break;
		case 2:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = two[t];
				iStart++;
			}
			break;
		case 3:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = three[t];
				iStart++;
			}
			break;
		case 4:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = four[t];
				iStart++;
			}
			break;
		case 5:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = five[t];
				iStart++;
			}
			break;
		case 6:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = six[t];
				iStart++;
			}
			break;
		case 7:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = seven[t];
				iStart++;
			}
			break;
		case 8:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = eight[t];
				iStart++;
			}
			break;
		case 9:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = nine[t];
				iStart++;
			}
			break;
		}
		for (int h = 0; h < 9; h++, iStart++) { // Додаемо частину HUNDRED
			numResult[iStart] = hundred[h];
		}
		size--; // Віднімаемо від частини size 1, т.е. переходимо на десяткі
		num = a % 100;
	}
	
	if (size == 2) { // Якщо size == 2 - записуемо в десяткі
		num = num / 10;
		switch (num) {
		case 0:
			break;
		case 1:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = one[t];
				iStart++;
			}
			break;
		case 2:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = two[t];
				iStart++;
			}
			break;
		case 3:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = three[t];
				iStart++;
			}
			break;
		case 4:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = four[t];
				iStart++;
			}
			break;
		case 5:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = five[t];
				iStart++;
			}
			break;
		case 6:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = six[t];
				iStart++;
			}
			break;
		case 7:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = seven[t];
				iStart++;
			}
			break;
		case 8:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = eight[t];
				iStart++;
			}
			break;
		case 9:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = nine[t];
				iStart++;
			}
			break;
		}
		for (int d = 0; d < 8; d++, iStart++) { // Додаемо частину DECADE
			numResult[iStart] = decade[d];
		}
		size--; // Віднімаемо от сайза 1, т.е. переходим на едіниці
	}
	
	if (size == 1) { // Якщо size == 1 - записуемо единиці
		num = a % 10;
		switch (num) {
		case 0:
			break;
		case 1:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = one[t];
				iStart++;
			}
			break;
		case 2:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = two[t];
				iStart++;
			}
			break;
		case 3:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = three[t];
				iStart++;
			}
			break;
		case 4:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = four[t];
				iStart++;
			}
			break;
		case 5:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = five[t];
				iStart++;
			}
			break;
		case 6:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = six[t];
				iStart++;
			}
			break;
		case 7:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = seven[t];
				iStart++;
			}
			break;
		case 8:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = eight[t];
				iStart++;
			}
			break;
		case 9:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = nine[t];
				iStart++;
			}
			break;
		}
		numResult[iStart] = '\0'; // кінец масива
	}
	
	if (size == 0) { // Якщо size == 0 записуемо нуль
		switch(num) {
		case 0:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = zero[t];
				iStart++;
			}
			break;
		}
	}
		
	return 0;
}

