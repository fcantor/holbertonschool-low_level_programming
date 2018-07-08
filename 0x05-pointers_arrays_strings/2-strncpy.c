#include "holberton.h"

/**
 * *_strncpy - This function copies a string
 * @src: The string to copy
 * @dest: The string to copy to
 * @n: The number of bytes to copy from src
 * Return: dest - the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* copy n bytes of src string to dest string */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
