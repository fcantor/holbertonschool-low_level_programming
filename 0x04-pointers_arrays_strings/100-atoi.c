#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - This function converts a string to an integer
 * @s: The string to be converted
 * Return: The integer converted to
 */

int _atoi(char *s)
{
	int num, i, negative;

	negative = 1;
	i = num = 0;
	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			negative = negative * -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (num >= 0)
		{
			num = num * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			num = num * 10 - (s[i] - '0');
			i++;
		}
	}
	negative = negative * -1;
	return (num * negative);
}
