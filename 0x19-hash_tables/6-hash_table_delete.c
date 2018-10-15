#include "hash_tables.h"

/**
 * hash_table_delete - This function deletes a hash table
 * @ht: The hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *p = NULL, *tmp = NULL;

	while (idx < ht->size)
	{
		p = ht->array[idx];
		while (p)
		{
			tmp = p;
			p = p->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
		idx++;
	}
	free(ht->array);
	free(ht);
}
