#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RollDice() {
	int roll = rand() % 6 + 1;
	printf("Your roll is %i\n", roll);
	return roll;
}

int main() {

	//We need to create this once per program
	srand(time(NULL));
	int roll1 = RollDice();
	int roll2 = RollDice();
	int sum = roll1 + roll2;
	int keepItRolling = true;
	printf("The sum is %i\n", sum);
	switch (sum)
	{
	case 7:
	case 11:
		printf("Lucky roll\n\n\n");
		break;

	case 2:
	case 3:
	case 12:
		printf("Thogh Luck\n\n\n");

		break;
	default:
		printf("Roll again\n\n\n");
		break;



	}

	char letter = rand() % 6 + 'A';
	printf("Your playing piece is %c", letter);
	return 0;
}