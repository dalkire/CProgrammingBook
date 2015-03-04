/*
  Exercise 1-13. Write a program to print a histogram of the
  lengths of words in its input. It is easy to draw the histogram
  with the bars horizontal; a vertical orientation is more challenging.
*/

#include <stdio.h>

int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n')
			c = '\n';
		else
			c = '=';
		printf("%c", c);
	}

	return 0;
}
