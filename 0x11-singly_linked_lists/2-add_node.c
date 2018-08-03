#include <stddef.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - This function returns the length of a string
 * @s: Variable that contains a character array to be counted
 * Return: Length of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;

	return (i);
}


/**
 * _strdup - This function returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: The string to copy
 * Return: A pointer to the newly allocated space, NULL if it fails
 */

char *_strdup(const char *str)
{
	char *copy;
	unsigned int i;

	/* if str is NULL, return NULL */
	if (str == NULL)
		return (NULL);

	/* allocate enough memory for copy */
	copy = malloc(_strlen(str) + 1);

	/* if malloc fails, return NULL */
	if (copy == NULL)
		return (NULL);

	/* copy string inside str to copy */
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	/* append null terminator to copy */
	copy[i] = '\0';

	return (copy);
}


/**
 * add_node - This function adds a new node at the
 * beginning of a linked list_t list
 * @head: The beginning of the linked list
 * @str: The string to duplicate into the new node
 * Return - The address of the new element, of NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{

	/* create new list & allocate memory for it */
	list_t *new = (list_t *)malloc(sizeof(list_t));

	/* assign new data */
	new->str = _strdup(str);
	new->len = _strlen(str);

	/* assign 'head' as next element of new list */
	new->next = (*head);

	/* move head to point to new list */
	(*head) = new;

	return (new);

}
