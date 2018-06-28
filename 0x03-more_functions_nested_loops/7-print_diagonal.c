#include "holberton.h"

/**
 * print_diagonal - This function draws a diagonal line
 * on the terminal
 * @n: The number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	/* slash and space variable */
	int sl, sp;

	if (n > 0)
	{
		for (sp = 0; sp < n; sp++)
		{
			for (sl = 0; sl < sp; sl++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

	}
	if (n <= 0)
		_putchar('\n');
}
