#include <stdio.h>
#include <windows.h>
void PrintHeader() {
	printf(" ___________________________\n");
	printf("/                           \\\n");
	printf("|  The Best Interface ever  |\n");
	printf("\\___________________________/\n");
}
int PrintMenu() {
	int userSelection = 0;
	

	printf("Choose one option\n");
	printf("1. Start Animation\n");
	printf("2. Settings\n");
	printf("3. Exit\n");
	scanf_s("%i", &userSelection);
	return userSelection;
}
void PrintFace(int max) {
	for (int i = 0; i < max; i++) {
		system("cls");
		if (i % 2 == 1) {
			printf(" __________\n");
			printf("/  _    _  \\\n");
			printf("| |_|  |_| |\n");
			printf("|          |\n");
			printf("|          |\n");
			printf("|  \\____/  |\n");
			printf("\\__________/\n");
		}
		else {
			printf(" __________\n");
			printf("/  _       \\\n");
			printf("| |_|  ___ |\n");
			printf("|          |\n");
			printf("|          |\n");
			printf("|  \\____/  |\n");
			printf("\\__________/\n");
		}
		Sleep(100);
	}
}
int PrintSettings() {
	int time = 10;
	system("cls");
	printf(" ___________\n");
	printf("/            \\\n");
	printf("|  Settings  |\n");
	printf("\\___________/\n");

	printf("\nHow many seconds do you want the animation to last\n");
	scanf_s("%i", &time);
	return time;
}
int main() {
	bool active = true;
	int time = 10;
	do
	{
		system("cls");
		PrintHeader();
		int x = PrintMenu();

	switch (x)
	{
	case 1:
		PrintFace(time);
		break;
	case 2:
		system("cls");
		time = PrintSettings()*5;
		Sleep(1500);
		break;
	case 3:
		system("cls");
		printf("Closing Menu...");
		Sleep(1000);
		system("exit");
		active = false;
	default:
		break;
	}


	} while (active);

	return 0;
}