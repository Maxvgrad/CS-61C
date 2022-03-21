#include <stdio.h>
/*
	Exercise 1-8. Write a program to count blanks, tabs, and newlines. 
*/
main()
{
	int c, nl;
	nl = 0;
	while ((c = getchar()) != EOF) {
		
		// 't' - character constant

		if (c == '\t' || c == ' ' || c == '\n')
			printf("inc\n");
			++nl;
	}
		
	printf("%d\n", nl);
}
