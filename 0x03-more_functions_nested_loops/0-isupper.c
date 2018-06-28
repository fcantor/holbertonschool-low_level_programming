#include "holberton.h"

/**
 * _isupper - This function checks for uppercase character
 * @c: The character to check
 * Return: 1 if c is uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
