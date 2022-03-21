#include <stdio.h>
/*
	Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each
	backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
	unambiguous way.
*/

#define IN 		0
#define OUT 	1

main()
{
	int c, nl, state;
	nl = 0;
	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			putchar('\\');
			putchar('t');
		} else if (c == '\\') {
			putchar('\\');
			putchar('\\');
		} else {
			putchar(c);
		}
	}
}