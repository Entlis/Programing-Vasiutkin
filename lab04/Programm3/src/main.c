int main () {
	float num = 123.656;//Переменная
	int num1 = num;//Целочисленное число 123
	int num2 = (((float)num - num1) * 1000);//Превращение числа после запятойв целочисленное 656
	float diff = (float)num1 / (float)num2;//Сравнение переменных
	float round_diff = ((float)(((int)(diff *100)) / 100.0));//Округление
return 0;
}
