#include "lists.h"
#include <stdlib.h>

/**
 * free_list - This function frees a list_t list
 * @head: The list to free
 */

void free_list(list_t *head)
{
	/* create tmp node */
	list_t *tmp;

	while (head != NULL)
	{
		/* assign head node to tmp node */
		tmp = head;
		/* make head point to next node on list */
		head = head->next;
		/* safely free node inside of tmp */
		free(tmp->str);
		free(tmp);
	}
}
