#include <stdio.h>
#include <stdlib.h>

int main() {
	int value = 100000;
	for (int i = 0, j = 1; i < value; i += j, j += i) {
		printf("%i %i ", i, j);
	}
}