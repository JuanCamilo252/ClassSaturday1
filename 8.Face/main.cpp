#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
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
int main() {
	PrintFace(10);
}