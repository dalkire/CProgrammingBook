#include <stdio.h>

int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n')
			c = '\n';
		else
			c = '+';
		printf("%c", c);
	}

	printf("\n\n");

	return 0;
}
