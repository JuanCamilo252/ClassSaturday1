#include <stdio.h>

int main() {

	int arr[10] = {1,2,3,4,0,0,0,0,0,0};

	int size = 4;

	for (int i = 0; i < size; i++)
	{
		printf("%i ", arr[i]);
	}

	printf("\n");
	int position = 2;
	int value = 5 ;

	for (int i = size; i > position; i--)
	{
		arr[i] = arr[i - 1];

	}
	arr[position] = value;
	size++;
	for (int i = 0; i < size; i++)
	{
		printf("%i ", arr[i]);
	}

	position = 3;

	for (int i = position; i < size; i++)
	{
		arr[i] = arr[i + 1];
	}
	printf("\n");
	size--;
	for (int i = 0; i < size; i++)
	{
		printf("%i ", arr[i]);
	}

	return 0;
}