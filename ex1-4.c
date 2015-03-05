/*
 * Exercise 1-4. Write a program to print the corresponding
 * Celsius to Fahrenheit table.
 */

#include <stdio.h>

/* print Celsius-Fahrenheit table
   for celsius = 0, 20, ..., 300; floating-point version */
main()
{
	float celsius, fahr;
	int lower, upper, step;

	lower = 0;    /* lower limit of temperature table */
	upper = 300;  /* upper limit */
	step = 20;    /* step size */

	celsius = lower;

	printf(" °C  °F\n");
	while (celsius <= upper) {
		fahr = celsius * 9.0 / 5.0 + 32.0;
		printf("%3.0f %3.0f\n", celsius, fahr);
		celsius += step;
	}
}
