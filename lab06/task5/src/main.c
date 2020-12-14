int main()
{
	int saze = 5;
	int arrIn[saze][saze]; // Об'явлення вхідного масива розміром saze x saze
	int arrOut[saze][saze]; // Об'явленя результірующего масива 
	
	for(int i = 0; i < saze; i++) { // Заповнення масива
		for (int j = 0; j < saze; j++) {
			arrIn[i][j] = i * saze + j;
		}
	}	
	
	for (int j = 0; j < saze; j++) { // Сдвіг елементів на один знак вправо
		for (int k = 0; k < saze; k++) {
			arrOut[j][k] = arrIn[j][k+1];
		}
		arrOut[j][saze-1] = arrIn[j][0];
	}
return 0;
}
