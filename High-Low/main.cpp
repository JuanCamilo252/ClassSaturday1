#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main() {
	srand(time(0));
	int toGuessCard = rand() % 10 + 1;
	int storeCard = toGuessCard;
	int score = 0;
	char playerChoice = '0';
	bool playerContinues = true;
	char playerChoice2 = '0';
	printf("High or Low the game\n");
	while (playerContinues) {
		
		printf("Your Score is: %i\n", score);
		printf("The Card is %i\n", toGuessCard);
		printf("Choose if the next Card is Lower(l/L) or Higher(H/h)\n");
		scanf_s(" %c", &playerChoice,1);
		
		toGuessCard = rand() % 10 + 1;
		if (storeCard == toGuessCard) {
			printf("Same Card generating another card\n");
			system("cls");
			continue;
		}
		switch (playerChoice)
		{
		case 'H':
		case'h':
			if (storeCard < toGuessCard) {
				printf("The card was %i You got a point\n", toGuessCard);
				score++;
				storeCard = toGuessCard;
				break;
			}
			else {
				printf("The card was %i it was lower\n", toGuessCard);
				storeCard = toGuessCard;
				break;
			}
		case 'L':
		case'l':
			if (storeCard > toGuessCard) {
				printf("The card was %i You got a point\n", toGuessCard);
				score++;
				storeCard = toGuessCard;
				break;
			}
			else {
				printf("The card was %i it was higher\n", toGuessCard);
				storeCard = toGuessCard;
				break;
			}
		default:
			printf("Not a Valid entry\n");
			break;
		}

		printf("Would you like to continue? (Y/N)\n");
		scanf_s(" %c", &playerChoice2,1);
		if (playerChoice2 == 'Y' || playerChoice2 == 'y') {
			system("cls");
		}
		else
		{
			printf("Game Over, Final Score %i",score);
			playerContinues = false;
		}
	}
	return 0;
}