#include "hash_tables.h"

/**
 * hash_table_print - This function prints a hash table
 * @ht: The hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0, flag = 1;
	hash_node_t *p;

	if (ht == NULL)
		return;

	printf("{");
	while (idx < ht->size)
	{
		if (ht->array[idx] == NULL)
		{
			idx++;
			continue;
		}
		if (flag == 0)
			printf(", ");
		flag = 0;
		p = ht->array[idx];
		while (p != NULL)
		{
			if (p->key)
				printf("'%s': ", p->key);
			if (p->value)
				printf("'%s'", p->value);
			if (p->next != NULL)
				printf(", ");
			p = p->next;
		}
		idx++;
	}
	printf("}\n");
}
