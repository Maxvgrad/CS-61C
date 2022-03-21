#include <stdio.h>


/*

Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in
its input.

*/

#define MAX_LENGTH 30

/* count digits, white space, others */
main()
{
	int c, i, j;
	int wordlengthes[MAX_LENGTH];
	for (i = 0; i < MAX_LENGTH; ++i)
		wordlengthes[i] = 0;
	i = 0;
	while ((c = getchar()) != EOF)
		if (c == ' ' || c == '\n' || c == '\t') {
			++wordlengthes[i];
			i = 0;
		}
		else
			++i;
	
	for (i = 0; i < MAX_LENGTH; ++i) {
		printf("%d:", wordlengthes[i]);
		for(j = 0; j < wordlengthes[i]; j++) {
			printf("-");
		}
		printf("\n");
	}
}