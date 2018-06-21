#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program uses the function rand() to output
 * random numbers to the screen, then tells the user if it's
 * positive, negative, or a zero.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
