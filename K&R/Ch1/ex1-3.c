#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */

/* 
Exercise 1-3. Modify the temperature conversion program to print a heading above the table.
*/

main()
{
	float fahr, celsius;
	float lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	printf("Fahrenheit Celsius table:\n");
	while (fahr <= upper) {
		celsius = 5.0 / 9.0 * (fahr-32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}