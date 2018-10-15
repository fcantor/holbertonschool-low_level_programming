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
	hash_node_t *new_node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] != NULL && strcmp(key, ht->array[idx]->key) == 0)
	{
		free(ht->array[idx]->value);
		ht->array[idx]->value = strdup(value);
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
