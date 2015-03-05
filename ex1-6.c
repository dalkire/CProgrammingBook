/*
 * Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
 */

#include <stdio.h>

int main()
{
	for (int i = 0; i < 100; i++)
		printf("%d\n", (getchar() != EOF));

	return 0;
}
