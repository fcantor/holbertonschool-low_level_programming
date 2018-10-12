#include "hash_tables.h"

/**
 * hash_table_create - This function creates an empty hash table
 * @size: The size of the array
 * Return: a pointer to the created hash table, else NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned int i;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
