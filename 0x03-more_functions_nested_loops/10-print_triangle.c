#include "holberton.h"

/**
 * print_triangle - This function prints a triangle
 * followed by a newline
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int row, column, space, pound;

	if (size <= 0)
		_putchar('\n');

	for (row = 0; row < size; row++)
	{
		column = size - 1 - row;

		for (space = column; space > 0; space--)
			_putchar(' ');
		for (pound = size - column; pound > 0; pound--)
			_putchar(35);

		_putchar('\n');
	}
}
