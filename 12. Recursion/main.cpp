#include <stdio.h>


int SumDigits(int number) {
	if (number > 10) {
		return number % 10 + SumDigits(number / 10);
	}
	else {
		return number % 10;
	}
}
int Pow(int base, int exponent) {
	if (exponent == 0) {
		return 1;
	}
	else {
		return Pow(base, exponent - 1) * base;
	}
}

void PrintTriangle(int size) {

	if (size <= 0) {
		return;
	}
	else {
		PrintTriangle(size - 1);
		for (int i = 0; i < size; i++)
		{
			printf("*");
		}
		printf("\n");
	}

}

int main() {
	printf("%i\n", SumDigits(5236));

	printf("%i\n", Pow(5, 3));

	PrintTriangle(3);
	return 0;
}