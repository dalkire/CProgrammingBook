/*
 * Exercise 1-15. Rewrite the temperature conversion program
 * of Section 1.2 to use a function for the conversion.
 */

#include <stdio.h>

float convert_fahr_to_celsius(float fahr);

int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;    /* lower limit of temperature table */
	upper = 300;  /* upper limit */
	step = 20;    /* step size */

	fahr = lower;

	printf(" °F     °C\n");
	while (fahr <= upper) {
		celsius = convert_fahr_to_celsius(fahr);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}

	return 0;
}

float convert_fahr_to_celsius(float fahr)
{
	return (5.0/9.0) * (fahr - 32.0);
}
