#include <stdio.h>
#include <stdlib.h>
struct Student
{
	int StudentId;
	float Score;
};

int main() {
	int size = 0;
	float highest = 0;
	float lowest = 101;
	float count = 0;
	printf("How many Students do you want to create\n");
	scanf_s("%i", &size);
	Student* ptrStudent = (Student*)malloc(size * sizeof(Student));
	for (int i = 0; i < size; i++)
	{
		printf("Student ID: ");
		scanf_s("%i", &ptrStudent[i].StudentId);
		printf("Student Score: ");
		scanf_s("%f", &ptrStudent[i].Score);
	}
	for (int i = 0; i < size; i++)
	{
		if (ptrStudent[i].Score > highest) { highest = ptrStudent[i].Score; }
		if (ptrStudent[i].Score < lowest) { lowest = ptrStudent[i].Score; }
		count += ptrStudent[i].Score;

	}
	printf("Highest Score: %.2f\n", highest);
	printf("Lowest Score: %.2f\n", lowest);
	printf("Average Score: %.2f\n", count/size);

	free(ptrStudent);
	return 0;
}