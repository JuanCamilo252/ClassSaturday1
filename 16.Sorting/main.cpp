#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void SwapElements(int arr[], int position1, int position2) {

	int temp = arr[position2];
	arr[position2] = arr[position1];
	arr[position1] = temp;
}
void BubbleSort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				SwapElements(arr, j + 1, j);
			}
		}
	}
}
int RandomizeArray(int arr[], int size) {
	bool sorted = false;
	int iterations = 0;
	do
	{
		sorted = true;
		iterations++;
		for (int j = 0; j < size; j++)
		{
			SwapElements(arr, rand() % size, rand() % size);
		}
		for (int i = 0; i < size - 1; i++)
		{
			if (arr[i] > arr[i + 1]) {
				sorted = false;
				break;
			}
		}
	} while (!sorted);
	return iterations;
}
void PrintArray(int arr[], int size) {

	for (int i = 0; i < size; i++)
	{
		printf("%i ", arr[i]);
	}
	printf("\n");
}


int main() {
	srand(time(NULL));
	int size = 6;
	int arr[] = { 50,60,35,1, 80,56 };
	int average = 0;
	int count = 0;
	PrintArray(arr, size);

	for (int i = 0; i < 100; i++)
	{
		if (RandomizeArray(arr, size) == 1) {
			count++;
		}
		average += RandomizeArray(arr, size);
	}
	average /= 100;
	
	PrintArray(arr, size);
	printf("%i, %i", average, count);
}
