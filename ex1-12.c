/*
  Exercise 1-12. Write a program that prints its input
  one word per line.

  Note: This program uses the loose definition for word
  we saw in the last program.
*/

#include <stdio.h>

int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t')
			c = '\n';
		printf("%c", c);
	}

	return 0;
}
