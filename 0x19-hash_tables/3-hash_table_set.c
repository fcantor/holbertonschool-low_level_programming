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
	hash_node_t *new_node, *p;
	unsigned long int index;

	if (!ht || !key || !*key || !value || strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	p = ht->array[index];
	if (p && strcmp(key, p->key) == 0)
	{
		p->value = strdup(value);
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = p;
	p = new_node;
	return (1);
}
