/*
 * Exercise 1-17. Write a program to print all input lines
 * that are longer than 80 characters.
 */

#include <stdio.h>
#define MAXLINE 1000     /* maximum input line size */

int _getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main() {
	int len;                /* current line length */
	int threshold;          /* maximum length seen so far */
	char line[MAXLINE];     /* current input line */

	threshold = 80;

	while ((len = _getline(line, MAXLINE)) > 0) {
		if (len > threshold) {
			printf("%s\n", line);
		}
	}

	return 0;
}

/* getline: read a line into s, return length */
int _getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
		s[i] = c;
	}

	if (c == '\n') {
		s[i] = c;
		i++;
	}

	s[i] = '\0';

	return i;
}