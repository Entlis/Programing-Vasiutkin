#define SIZE 3 // Розмір матриці

int main()
{
	int matrixIn[SIZE][SIZE]; // Обявлення масива матріц розміром SIZE х SIZE
	int matrixOut[SIZE][SIZE]; // Обявлення резутірующего масива матріц 
	
	for(int i = 0; i < SIZE; i++) { // Заповнення масива
		for (int j = 0; j < SIZE; j++) {
			matrixIn[i][j] = i * SIZE + j;
		}
	}
	
	for(int i = 0; i < SIZE; i++) { // Помноженя матріц саму на себе 
		for (int j = 0; j < SIZE; j++) {
			matrixOut[i][j] = 0;
			for (int k = 0; k < SIZE; k++) {
				matrixOut[i][j] += matrixIn[i][k] * matrixIn[k][j];
			}
		}
	}
	
	return 0;
}
