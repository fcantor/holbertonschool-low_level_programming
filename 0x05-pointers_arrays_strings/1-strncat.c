#include "holberton.h"

/**
 * *_strncat - This function concatenates two strings
 * but uses, at most, n bytes from src, and src does not need to be
 * null-terminated if it contains n or more bytes
 * @src: The string to append to dest
 * @dest: The string to concatenate with src
 * @n: The number of bytes to append
 * Return: The concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	/* get the length of dest string */
	for (len = 0; dest[len] != 0; len++)
		;

	/* append src to dest one character at a time */
	for (i = 0; i < n; i++)
	{
		dest[len] = src[i];
		len++;
	}

	/* return concatenated string */
	return (dest);
}
