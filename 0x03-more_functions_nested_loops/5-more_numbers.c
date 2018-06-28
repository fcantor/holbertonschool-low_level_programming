#include "holberton.h"

/**
 * more_numbers - This function prints 10 times the numbers
 * from 0-14, followed by a newline
 */
void more_numbers(void)
{
	int num, row, tens;

	for (row = 0; row <= 9; row++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				tens = num / 10;
				_putchar(tens + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
