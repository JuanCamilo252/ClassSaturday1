#include <stdio.h>

void PrintArray(int arr[], int size) {

	for (int i = 0; i < size; i++)
	{
		printf("%i ", arr[i]);
	}
	printf("\n");
}
void RightShift(int arr[], int size) {
	size--;
	int stored = arr[size];
	for (int i = size; i > 0; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[0] = stored;
}
void LeftShift(int arr[], int size) {
	int stored = arr[0];
	for (int i = 0; i < size; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[size - 1] = stored;
}
void SwapElements(int arr[], int position1 , int position2) {

	int temp = arr[position2];
	arr[position2] = arr[position1];
	arr[position1] = temp;
}
int main() {

	int arr[] = { 5,10,15,20,5 };
	PrintArray(arr, 5);
	RightShift(arr, 5);
	PrintArray(arr, 5);
	LeftShift(arr, 5);
	PrintArray(arr, 5);
 	LeftShift(arr, 5);
	PrintArray(arr, 5);
	SwapElements(arr, 4, 3);
	PrintArray(arr, 5);

	return 0;
}
