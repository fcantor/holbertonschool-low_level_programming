#include "hash_tables.h"

/**
 * hash_table_get - This function retrieves a value associated with a key
 * @ht: The pointer to the hash table
 * @key: The key to search for
 * Return: The value associated with the element, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *p;

	if (ht == NULL)
		return (NULL);

	/* get index of key */
	idx = key_index((const unsigned char *)key, ht->size);

	/* loop through linked list starting at idx */
	p = ht->array[idx];
	if (p)
	{
		for (; p != NULL; p = p->next)
		{
			if (strcmp(p->key, key) == 0)
				return (p->value);
		}
	}
	return (NULL);
}
