#include "holberton.h"

/**
 * get_endianness - This function checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int num = 1;
	char *p;

	p = (char *)&num;

	if (*p == 0)
		return (0);
	else
		return (1);
}
