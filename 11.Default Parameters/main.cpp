#include <stdio.h>

void DisplayScore(int score, char playerSymbol = '-', int padding = 1) {
	for (int i = 0; i < score; i++)
	{

		printf("%c", playerSymbol);
		for (int j = 0; j < padding; j++)
		{
			printf(" ");

		}
	}
	printf("\n");
}

float CalculateScore(int baseScore, int bonus = 0, float multiplier = 1.0) {
	return (baseScore + bonus) * multiplier;
}
int main() {
	DisplayScore(10);
	DisplayScore(5,'+',3);
	DisplayScore(10);
	DisplayScore(5);
	DisplayScore(10);

	printf("Your Score is %.3f\n", CalculateScore(150));
	printf("Your Score is %.3f\n", CalculateScore(150,50));
	printf("Your Score is %.3f\n", CalculateScore(150,50,1.5));
	printf("Your Score is %.3f\n", CalculateScore(150,100,1.55));
}