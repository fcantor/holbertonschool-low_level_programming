#include "hash_tables.h"

/**
 * hash_table_set - This function adds an element to the hash table
 * @ht: A pointer to the hash table
 * @key: The key to add to the hash table
 * @value: The corresponding value to add to the hash table
 * Return: 1 for success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *p = NULL;
	unsigned long int i = 0;

	/* initial check for null values or an empty key */
	if (!ht || !key || !*key || !value)
		return (0);

	/* take the index of the key and assign to i */
	i = key_index((unsigned char *)key, ht->size);
	/* set node pointer to beginning of array */
	p = ht->array[i];
	/* if pointer is not NULL */
	if (p)
	{
		/* search array at index to see if it exists at the beginning */
		for (; p != NULL; p = p->next)
		{
			/* if key in node matches key we're searching */
			if (!strcmp(p->key, (char *)key))
			{
				/* new value supercedes existing value */
				free(p->value);
				p->value = strdup(value);
				return (1); /* return 1 for success */
			}
		}
	}
	/* malloc a new node */
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
