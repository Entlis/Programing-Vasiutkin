#define GRN 100//Количество гривен
#define KURS_RUB 0.4//Курс рубля
#define KURS_DOL 28//Курс доллоров
#define KURS_EURO 32//Курс евро
int main () {
	float rub = GRN / KURS_RUB;//Делим колличество гривен на курс рубля
	float dol = GRN / KURS_DOL;//Делим колличество гривен на курс доллора
	float euro = GRN / KURS_EURO;//Делим колличество гривен на курс евро
	return 0;
}	
