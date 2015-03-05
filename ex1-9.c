/*
 * Exercise 1-9. Write a program to copy its input to its output,
 * replacing each string of one or more blanks by a single blank.
 */

#include <stdio.h>

int main() {
	int prev, c;

	while ((c = getchar()) != EOF) {
		if (c != ' ' || c != prev)
			printf("%c", c);
		prev = c;
	}

	printf("\n\n");

	return 0;
}
