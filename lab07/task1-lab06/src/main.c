#include "main.h" 
int main() {
	srand(time(NULL));
	
	int x = 97;
	char zap = '_';
	int y = 122;
		
	int range_for_rand;//з заданих чисел для рандому оприділити, що є кількістю чисел в діапазоні, а що є "відступ" від нуля
	int min_number_of_range;
	if (x < y) {
		range_for_rand = y - x + 1;
		min_number_of_range = x;
	} else if (y < x) {
		range_for_rand = x - y + 1;
		min_number_of_range = y;
	}
	int const lenIn = 5;// довжина заданого слова
	char strIn[lenIn];//масив з заданого слова
	

	for (int i = 0; i < lenIn - 1; i++) {
		strIn[i] = rand() % range_for_rand + min_number_of_range;//рандомне заповнення масиву
	}
	strIn[lenIn - 1] = '\0';



	char strIn2[lenIn];
	
	for (int i = 0; i < lenIn - 1; i++) {
		strIn2[i] = rand() % range_for_rand + min_number_of_range;
	}
	strIn2[lenIn - 1] = '\0';



	get_center(strIn, zap, lenIn);//функція змінює параметри всередені себе, але нічого не повертає
	get_center(strIn2, zap, lenIn);
	return 0;
}

