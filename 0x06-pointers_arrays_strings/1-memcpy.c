#include "holberton.h"

/**
 * *_memcpy - This function copies memory area
 * @dest: The destination string to copy to
 * @src: The source string to copy from
 * @n: The number of bytes to copy
 * Return: A pointer to the destination string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
