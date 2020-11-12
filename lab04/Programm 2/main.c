#include "stdio.h"
#define num 245
int main() {
	int first = num / 100;
	int second = num / 10 % 10;
	int third = num % 10;
	int same = 0;
	if (first == second || first == third || second == third){
		same += 1;
		}
return 0;
}
