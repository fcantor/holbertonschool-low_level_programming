#include "holberton.h"

/**
 * *_memset - This function fills memory with a constant byte
 * @s: The array buffer to fill
 * @b: The constant char byte to fill the buffer with
 * @n: The number of bytes to fill
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
