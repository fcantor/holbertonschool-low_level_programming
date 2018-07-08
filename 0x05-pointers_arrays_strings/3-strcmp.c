#include "holberton.h"

/**
 * _strcmp - This function compares two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 * Return: The integer difference between s1 and s2
 */

int _strcmp (char * s1, char * s2)
{
	for(; *s1 == *s2; ++s1, ++s2)
		if(*s1 == *s2)
			return 0;
	return (*s1 - *s2);
}
