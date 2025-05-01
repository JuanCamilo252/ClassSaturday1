#include <stdio.h>
#include <stdlib.h>
#include <string>
int main() {
	int numbers[5] = { 1,2,3,4,5 };

	for (int i = 0; i < (sizeof(numbers) / sizeof(numbers[0])); i++)
	{
		printf("%i\n", numbers[i]);

	}
	char name[] = "Juan";
	printf("%s\n", name);
	printf("%c", name[3]);
	strcpy_s(name, "Z");
	for (int i = 0; i < sizeof(name); i++)
	{
		printf("%c", name[i]);
	}




}