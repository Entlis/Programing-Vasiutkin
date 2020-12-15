#include <stdlib.h>
#include <time.h>

#define LENOUT 15

void get_center(char strIn[], char zap, int lenIn);
 
void get_center(char strIn[], char zap, int lenIn) {//функція, яка центрує задане слово

	char strResult[LENOUT];
	int lenZap = LENOUT - lenIn;//кількість елементів в  масиві, виділених на заповнювач 
	int halfLenZap = lenZap / 2;//кількість заповнювачей перед заданм рядком


	for (int i = 0; i < halfLenZap; i++) {//в початок результуючого масиву вставимо необхідну кількість заповнювачей
		strResult[i] = zap;
	}

	for (int i = halfLenZap; i < halfLenZap + lenIn - 1;) {//вставимо заданий на початку текст по центру результуючого масиву
		for (int j = 0; j < lenIn; j++) {
			strResult[i] = strIn[j];
			i++;
		}
	}

	for (int i = (halfLenZap + lenIn - 1); i < LENOUT - 1; i++) {//додаємо у результуючий масив заповнювач до його кінця
		strResult[i] = zap;
	}
	
	strResult[LENOUT - 1] = '\0';//масив повинен закінчуватися '\0'
	if (lenIn % 2 == 1) {
		strResult[LENOUT - 2] = '\0';
	}
}
