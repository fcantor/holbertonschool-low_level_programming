#include "lists.h"

/**
 * sum_listint - This function returns the sum of all the data
 * of a listint_t linked list
 * @head: A pointer to the linked list
 * Return: The sum of all the integer data of the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
