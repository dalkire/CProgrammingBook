/*
 * Exercise 1-16. Revise the main routine of the longest-line program
 * so it will correctly print the length of arbitrarily long input lines,
 * and as much as possible of the text.
 *
 * Note: I was hitting a 1024 character line limit, but I tested with
 * a 1022 character line.
 */

#include <stdio.h>
#define MAXLINE 1000     /* maximum input line size */

int _getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main() {
	int len;               /* current line length */
	int max;               /* maximum length seen so far */
	char line[MAXLINE];        /* current input line */
	char longest[MAXLINE];     /* longest line saved here */

	max = 0;

	while ((len = _getline(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}

	if (max > 0) {     /* there was a longest line */
		printf("\n\n%d chars: %s\n", max, longest);
	}

	return 0;
}

/* getline: read a line into s, return length */
int _getline(char s[], int lim)
{
	int c, i;

	for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
		if (i < lim - 1) {     /* only save MAXLINE chars */
			s[i] = c;
		}
	}

	if (c == '\n') {
		s[i] = c;
		i++;
	}

	s[i] = '\0';

	return i;
}

/* copy: copy 'from' into 'to' */
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while (i < MAXLINE && (to[i] = from[i]) != '\0') {
		i++;
	}
}
