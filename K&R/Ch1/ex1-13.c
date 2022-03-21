#include <stdio.h>


/*

Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is easy
to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

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