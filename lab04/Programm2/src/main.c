#define num 245
int main() {
	int first = num / 100;//Сотни
	int second = num / 10 % 10;//Десятки
	int third = num % 10;//Единицы
	int same = 0;
	if (first == second || first == third || second == third){//Сравнение переменных
		same += 1;//Показатель одинаковых чисел
		}
return 0;
}
