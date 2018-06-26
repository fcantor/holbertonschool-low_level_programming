#include "holberton.h"

/**
 * jack_bauer - this function prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int a, b, c, d;
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			a = (i / 10) + '0';
			b = (i % 10) + '0';
			c = (j / 10) + '0';
			d = (j % 10) + '0';
			_putchar(a);
			_putchar(b);
			_putchar(':');
			_putchar(c);
			_putchar(d);
			_putchar('\n');
		}
	}
}
