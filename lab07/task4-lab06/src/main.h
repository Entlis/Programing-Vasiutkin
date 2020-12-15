#include <stdlib.h>
#include <time.h>
#define LEN 6
int getNumWords(char strIn[]);
int getNumWords(char strIn[]) {
	
	int count = 0;
	
	for (int i = 0; i < LEN; i++) {//знайдемо кількість слів за допомогою останньої букви слова
		if (strIn[i] != ' ' && (strIn[i + 1] == ' ' || strIn[i + 1] == '\0')) {
			count++;
		} 
	}
	return count;
} 
