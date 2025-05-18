#include <stdio.h>
#include <stdlib.h>

int Pow(int number, int exponent) {
	int base = number;
	if (exponent == 0) {
		return 1;
	}
	for (int i = 1; i < exponent; i++)
	{
		number *= base;
	}
	return number;
}
void DecimalToBinary(int number) {
	int arr[32] = {};
	int lastIndex = 31;
	for (int i = number; i > 0; i /= 2)
	{
		arr[lastIndex] = i % 2;
		lastIndex--;
	}
	for (int i = lastIndex + 1; i < 32; i++)
	{
		printf("%i", arr[i]);
	}
	printf("\n");
}

void BinaryToDecimal(int arr[], int size) {
	int temp = size - 1;
	int decimal = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[temp] == 1) {
			decimal += Pow(2, i);

		}
		temp--;
	}
	printf("%i", decimal);
}
void DecimalToHexa(int number) {
	char arr[12] = {};
	int remainder = number % 16;
	for (int i = number; i > 0; i /= 16)
	{
		if (remainder > 9) {
			arr[i] = remainder + 'A' - 10;
		}
		else
		{
			arr[i] = remainder + '0';
		}

	}
}
void HexaToDecimal(char arr[], int size) {
	int temp = size - 1;
	int decimal = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[temp]== decimal) {
			decimal += Pow(2, i);
		}

		temp--;
	}
	printf("%i", decimal);
}
int main() {
	int arr[] = { 1,0,0,0,0,0,0,0,0,1 };
	//DecimalToBinary(37);
	//DecimalToBinary(125);
	//DecimalToBinary(256);
	//DecimalToBinary(37);
	//BinaryToDecimal(arr, 10);

	//DecimalToHexa(255);
	//DecimalToHexa(4096);
	//DecimalToHexa(170);
	//DecimalToHexa(123);


}