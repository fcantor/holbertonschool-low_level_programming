#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 * @list: double pointer to the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *p = NULL, *current = NULL;

	/* check if elements in list are greater than two */
	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
		return;

	/* set p and current variables to second node */
	p = current = (*list)->next;

	/* while second node is not null */
	while (current)
	{
		/* set current to third node */
		current = current->next;


		/* while first node && 2nd < 1st */
		while (p->prev && p->n < p->prev->n)
		{
			/* 1st node now points to 3rd node */
			p->prev->next = p->next;
			/* if 3rd node is not null */
			if (p->next != NULL)
			{
				/* 3rd node points to 1st node */
				p->next->prev = p->prev;
			}
			p->next = p->prev;
			p->prev = p->next->prev;
			if (p->prev)
				p->prev->next = p;
			else
				*list = p;
			p->next->prev = p;
			print_list(*list);
		}
		p = current;
	}
}
