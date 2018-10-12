#include "hash_tables.h"

/**
 * hash_djb2 - This hash function is by Dan Bernstein and uses the magic of
 * number 33 to hash the key string passed into it
 * @str: The key to hash
 * Return: The hashed value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);

}
