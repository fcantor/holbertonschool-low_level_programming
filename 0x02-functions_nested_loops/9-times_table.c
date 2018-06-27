#include <unistd.h>
#include "holberton.h"

/**
 * times_table - This function prints the 9 times table
 * starting with 0
 */
void times_table(void)
{

	int x, y, a, b;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			a = (x * y) / 10;
			b = (x * y) % 10;

			if ((x * y) > 9)
				_putchar(a + '0');

			_putchar(b + '0');

			/* Don't print commas after the 10th column */
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			/* Add an extra space if printing single digits */
			if (y == 9 && x == 0)
				break;
			else if (x * (y + 1) < 10)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
