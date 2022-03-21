#include <stdio.h>

/* 
Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1. 
*/

/* copy input to output; 1st version */
main()
{
    printf("Inputting something other than EOF, value of the expression is %d\n", getchar() != EOF);
    getchar();
    printf("Inputting EOF, value of the expression is %d\n", getchar() != EOF);
    printf("It is verified that the expression getchar() != EOF is 0 or 1.\n");
}