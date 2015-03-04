/*
  Exercise 1-14. Write a program to print a histogram of
  the frequencies of different characters in its input.
*/

#include <stdio.h>

int main() {
	int c, i, a[128] = {};

	while ((c = getchar()) != EOF) {
		if (c < 128)
			a[c] += 1;
	}

	for (i = 0; i < 128; i++) {
		if (a[i] > 0) {
			printf("%c:\t", i);

			while (a[i]-- > 0) {
				printf("=");
			}
			printf("\n");
		}
	}

	return 0;
}
