#include <stdio.h>

int main() {

	int number = 0;
	bool validNumber=true;
	int count = 0;


	while (validNumber) {
		printf("Enter a positive number greater than 2\n");
		scanf_s("%i", &number);
		if (number < 2) {
			printf("Wrong value\n");
		}
		else {
			validNumber = false;
		}
	}
	for (int i = 2; i <= number; i++) {
		if (i % 2 == 0) {
			count += i;
		}
	}
	printf("The sum of even numbers between 2 and %i is = %i", number, count);
	return 0;
}