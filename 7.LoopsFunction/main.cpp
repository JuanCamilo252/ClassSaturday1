#include <stdio.h>
#include <stdlib.h>

int main() {

	for (int i = 2; i <= 6; i++)
	{
		for (int j = 1; j <= 4; j++) {
			if (i * j < 10) {
				printf("(%i,%i) The product is: %i\n", i, j,i*j);

			}
		}
	}

	return 0;
}