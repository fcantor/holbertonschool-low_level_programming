#ifndef _LISTS_H_
#define _LISTS_H_
#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next
 *
 * Description: singly linked list node structure
 * for Holberton
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;

} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);

#endif /* _LISTS_H_ */
