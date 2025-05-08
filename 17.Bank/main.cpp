#include <stdio.h>
#include <stdlib.h>

void PrintMenu() {
	system("cls");
	printf("_______________\n");
	printf(" ATM Simulator\n");
	printf("_______________\n");
	printf("\nSelect an Option\n");
	printf("1. Check Balance\n");
	printf("2. Deposit Money\n");
	printf("3. Withdraw Money\n");
	printf("4. Exit\n");

}
void PrintBalance(int balance) {
	system("cls");
	char character;
	printf("Your Balance is %i\n", balance);
	printf("1. Deposit Money\n");
	printf("2. Withdraw Money\n");
	scanf_s(" %c", &character,1);
}

int main() {
	int choice = 0;
	int balance = 2500;
	int exit = 0;
	bool finish = true;
	do
	{

		PrintMenu();
		scanf_s("%i", &choice);
		switch (choice)
		{
		case 1:
			PrintBalance(balance);
			break;
		case 2:

		case 3:
		case 4:
		default:
			break;
		}
	} while (finish);
}