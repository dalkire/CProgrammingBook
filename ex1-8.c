/*
  Exercise 1-8. Write a program to count blanks, tabs, and newlines.
*/

#include <stdio.h>

int main() {
	int c, nb, nt, nn;

	nb = nt = nn = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			nb++;
		else if (c == '\t')
			nt++;
		else if (c == '\n')
			nn++;
	}

	printf("\n");
	printf("blanks:\t\t%d\n", nb);
	printf("tabs:\t\t%d\n", nt);
	printf("newlines:\t%d\n", nn);
	printf("total:\t\t%d\n", nb + nt + nn);

	return 0;
}
