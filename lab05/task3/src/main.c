int main()
{
	int Ticket = 231232;// Номер щасливий квітка
	int sumfirstnum = 0;
	int sumlastnum = 0;
	int firsthalf = Ticket / 1000;
		// Через for
	for (int a = 1000; (Ticket / a) > 0; a *= 10) {
		sumfirstnum += Ticket / a % 10;
	}
	for (int b = 1; (firsthalf / b) > 0; b *= 10) {
		sumlastnum += Ticket / b % 10;
	}
	
		// Через WHILE
	int sumfirstnumWhile = 0;
	int sumlastnumWhile = 0;	
	
	int a = 1000;
	int b = 1; 
	
	while ((Ticket / a) > 0) { 
		sumfirstnumWhile += Ticket / a % 10;
		a *= 10;
	}
	while ((firsthalf / b) > 0) {
		sumlastnumWhile += Ticket / b % 10;
		b *= 10;
	}
		// Через DO WHILE
	int sumfirstnumDoWhile = 0;
	int sumlastnumDoWhile = 0;
	
	int a1 = 1000;
	int b1 = 1;
	
	do {
		sumfirstnumDoWhile += Ticket / a1 % 10;
		a1 *= 10;
	} while ((Ticket / a1) > 0);
	do { 
		sumlastnumDoWhile += Ticket / b1 % 10;
		b1 *= 10;
	} while ((firsthalf / b1) > 0);
	
		// Провіряемо щасливий/ні
	int resultFor = 0;
	int resultWhile = 0;
	int resultDoWhile = 0;
		// Провіряемо щасливий/ні через FOR
	if (sumfirstnum == sumlastnum) {
		resultFor = 1;
	}
		// Провіряемо щасливий/ні через While
	if (sumfirstnumWhile == sumlastnumWhile) {
		resultWhile = 1;
	}
		// Провіряемо щасливий/ні Do While
	if (sumfirstnumDoWhile == sumlastnumDoWhile) {
		resultDoWhile = 1;
	}
		
	return 0;
}
