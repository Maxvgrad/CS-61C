#include <stdio.h>

// Exercise 1-1. Run the ``hello, world'' program on your system. Experiment with leaving out
// parts of the program, to see what error messages you get.
// Exercise 1-2. Experiment to find out what happens when prints's argument string contains \c,
// where c is some character not listed above.
int main() 
{
	printf("Hello world\n");
	printf("\\e=\e\n");
	return 0;
}