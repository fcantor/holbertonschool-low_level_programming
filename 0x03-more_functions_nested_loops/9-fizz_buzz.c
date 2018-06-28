#include <stdio.h>

/**
 * main - This program prints the numbers 1-100, followed by a newline.
 * But for multiples of 3, prints 'Fizz' instead of the number,
 * for multiples of 5, prints 'Buzz', and for multiples of both,
 * prints 'FizzBuzz'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);

		if (i != 100)
			printf(" ");
	}

	printf("\n");
	return (0);
}
