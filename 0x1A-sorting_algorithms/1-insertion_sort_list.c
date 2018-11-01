#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 * @list: double pointer to the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *run1 = *list;
	listint_t *run2, *tmp_p, *tmp_n, *tmp;

	run2 = (*list)->next;

	/* run through linked list from left to right */
	while (run1 != NULL)
	{
		if (run2 < run1)
		{
			/* swap */
			tmp_p = run1;
			tmp_n = run1->next->next;
			if (tmp_p)
			{
				run2->prev = tmp_p->prev;
				run2->next = tmp_p;
				tmp_p->prev = run2;
				tmp_p->next = tmp_n;
			}
			if (tmp_n)
				tmp_n->prev = tmp_p;
			/* print list */
			print_list(*list);
		}

		/* run through linked list from right to left */
		while (run1 != *list)
		{
			if (run1 < run1->prev)
			{
				/* swap */
				tmp_p = run2->prev;
				tmp_n = run2->next;
				if (tmp_p)
				{
					run2->prev = tmp_p->prev;
					run2->next = tmp_p;
					tmp_p->prev = run2;
					tmp_p->next = tmp_n;
				}
				if (tmp_n)
                                        tmp_n->prev = tmp_p;
                                if (run2->prev)
                                        run2->prev->next = run2;
				/* print list */
				print_list(*list);
			}
			else
			{
				run1 = tmp;
				if (tmp != *list)
					tmp = tmp->prev;
			}
		}
		/* move runners */;
		if (run2->next != NULL)
		{
			run1 = run2;
			run2 = run2->next;
		}
		/* implement stop condition */
		if (run2->next == NULL)
			break;
	}
}
