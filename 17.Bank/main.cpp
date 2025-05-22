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


void DepositMoney(int* balance) {
	system("cls");
	int temp = 0;
	printf("How much do you want to deposit?\n");
	scanf_s("%i", &temp);
	*balance += temp;
}
void WithdrawMoney(int* balance) {
	system("cls");
	int temp = 0;
	printf("How much do you want to withdraw?\n");
	scanf_s("%i", &temp);
	*balance -= temp;
}
void PrintBalance(int*& balance) {
	system("cls");
	int choice;
	printf("Your Balance is %i\n", *balance);
	printf("1. Deposit Money\n");
	printf("2. Withdraw Money\n");
	printf("3. Back");
	scanf_s("%i", &choice);
	switch (choice)
	{
	case 1:
		DepositMoney(balance);
	case 2:
		WithdrawMoney(balance);
	default:
		break;
	}
}
int main() {
	int choice = 0;
	int balance = 2500;
	int* balancePointer = &balance;
	bool finish = true;
	do
	{

		PrintMenu();
		scanf_s("%i", &choice);
		switch (choice)
		{
		case 1:
			PrintBalance(balancePointer);
			break;
		case 2:
			DepositMoney(&balance);
			break;
		case 3:
			WithdrawMoney(&balance);
			break;
		case 4:
			system("cls");
			finish = false;
			break;
		default:
			break;
		}
	} while (finish);
}