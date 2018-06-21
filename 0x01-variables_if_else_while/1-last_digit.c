#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program outputs a random number to the screen and
 * tells the user what the last digit of the random number is
 * and whether the digit is greater than 5, less than 6 but not 0,
 * or whether the digit is 0.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n",
		       n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, last_digit);

	return (0);
}
