#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
/* 
	Exercise 1-12. Write a program that prints its input one word per line.
*/
main()
{
	int c, nl, nw, nc, state;
	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t') {
			putchar('\n');
		}
		else {
			putchar(c);
		}
	}
}