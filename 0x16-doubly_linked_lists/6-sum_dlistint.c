#include "lists.h"

/**
 * sum_dlistint - This function returns the sum of all the data (n)
 * of the dlistint_t linked list passed to it
 * @head: The head node of the list
 * Return: The sum of all the data (n), else if list is empty: 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
