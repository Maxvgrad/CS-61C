#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */

/* 
Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
*/

main()
{
	float fahr, celsius;
	float lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	printf("Celsius Fahrenheit:\n");
	while (celsius <= upper) {
		// celsius = 5.0 / 9.0 * (fahr-32.0);
		fahr = celsius * 9.0 / 5.0 + 32.0;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius += step;
	}
}