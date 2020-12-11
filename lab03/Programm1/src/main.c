#include <stdio.h>// Для использования printf
int main () {
	int x1, x2, y1, y2, z1, z2; // Объявление величин
	int rast;
	printf("Vvedite x1 y1 z1 x2 y2 z2"); // Объявление переменных
	scanf("%d %d %d %d %d %d", &x1 ,&y1 ,&z1 ,&x2 ,&y2 ,&z2);
	rast = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)) + ((z2 - z1) * (z2 - z1)); //Уравнение
	printf("Kvadrat rast = %d", rast); //Вывод
	return 0;
}
