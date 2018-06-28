#include "holberton.h"

/**
 * print_square - This function prints a sqaure,
 * followed by a newline
 * @size: The size of the square
 */
void print_square(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
