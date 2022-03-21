#include <stdio.h>
/*
	Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. 
*/

#define IN 		0
#define OUT 	1

main()
{
	int c, nl, state;
	nl = 0;
	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == ' ' && state == IN) {
			continue;
		}
		if (c == ' ') {
			state = IN;
		} else {
			state = OUT;
		}
		putchar(c);
	}
}