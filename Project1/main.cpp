#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	int maxAttemps = 5;

	int guess = 0;
	int numberAttemps = 1;

	srand(time(NULL));

	//limit random generated number
	int secretNumber = rand() % 20 + 1;

	printf("Welcome to the Number guessing game!\n");
	printf("Guess a number between 1 and 20\n");

	while (numberAttemps<= maxAttemps)
	{
		printf("Attemps %i/%i: Enter your guess:\n",numberAttemps,maxAttemps);
		scanf_s("%i", &guess);
		if (guess == secretNumber) {
			printf("You win\nYou guess it in %i Attemps", numberAttemps);
			break;
		}
		else if (guess < secretNumber) {
			printf("To Low\n");
		}
		else if (guess > secretNumber) {
			printf("To High\n");
		}
		numberAttemps++;
	}
	if (numberAttemps > maxAttemps) {
		printf("You lose\nThe secret number was %i",secretNumber);
	}
	return 0;
}