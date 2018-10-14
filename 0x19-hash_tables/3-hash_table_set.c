#include "hash_tables.h"

/**
 * add_node - creates a new node in the hash table
 * @key: The key to add
 * @value: The corresponding value to add
 * Return: A pointer to the new node
 */
hash_node_t *add_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}

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
	for (; p != NULL; p = p->next)
	{
		if (strcmp(key, p->key) == 0)
		{
			free(p->value);
			p->value = strdup(value);
			return (1);
		}
	}

	new_node = add_node(key, value);
	if (!new_node)
		return (0);
	new_node->next = p;
	p = new_node;
	return (1);
}
