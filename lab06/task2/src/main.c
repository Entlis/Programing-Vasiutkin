int main()
{
	int a = 20; // Розмір масива
	int arrResult[a]; 
	int limit = 100; // Діапазон пошуку простих чисіл
	int i,j,check,k; 
	
	for (int i = 2; i < limit; i++) {
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				check = 1;  // Якщо check = 1 - число не просте
				break;
			} else {
				check = 0;	// Якщо check = 0 - число просте
			}
		}
		
		if (check == 0) { // Число просте - записуемо его в масив, якщо число не просте - пропускаемо
			arrResult[k] = i;
			k++;
			
		}
	}
	
	return 0;
}
