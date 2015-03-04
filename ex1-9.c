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
