int main () {
	float num = 123.656;
	int num1 = num;
	float num2 = ((num - num1) * 1000);
	float diff = (float)num1 / (float)num2;
	float round_diff = ((float)(((int)(diff *100)) / 100.0));
return 0;
}
