#include <stdio.h>
#include <stdlib.h>

int main() {
	int count = 0;
	int number = 0;
	int numberOfEntries = 0;
	printf("Average Calculator for Positives Numbers when You enter a negative number it will stop and calculate it with all the previous numbers\n");
	do
	{
		printf("Enter a postive number\n");
		scanf_s("%i", &number);
		if (number>0) {
			numberOfEntries++;
			count += number;
		}
		else
		{
			printf("You entered a negative number\n");
		}
	} while (number > 0);
	
	if (count == 0) {
		printf("You did not enter any valid numbers\n");
	}
	else
	{
		
		printf("Valid entries: %i", numberOfEntries);
		printf("The average of the numbers is %.2f\n",(float)count/ (float)numberOfEntries);
	}

	return 0;
}