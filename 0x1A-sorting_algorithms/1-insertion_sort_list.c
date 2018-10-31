#include "sort.h"

/**
 *
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *run1, *run2, *tmp;
	int m = 0;

	run1 = head;
	run2 = head->next;

	/* run through linked list from left to right */
	while (!run1)
	{
		if (run2->n < run1->n)
		{
			/* swap */
			m = run1->n;
			run1->n = run2->n;
			run2->n = m;
			print_list(*list);
		}

		/* run through linked list from right to left */
		while (run1 != head)
		{
			tmp = run1->prev->n;
			if (run1->n < tmp->n)
			{
				/* swap */
				m = run1->n;
				run1->n = tmp->n;
				tmp->n = m;
				print_list(*list);
			}
			else
			{
				run1 = tmp;
				if (tmp != head)
					tmp->n = tmp->prev->n;
			}
		}
		/* move runners */;
		if (run2->next != NULL)
		{
			run1 = run2;
			run2 = run2->next;
		}
		/* implement stop condition */
		if (tmp == head)
			break;
	}
}
