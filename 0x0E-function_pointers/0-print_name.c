#include "function_pointers.h"

/**
 * print_name - This function prints a name
 * @name: A character pointer
 * @f: A function that takes a char pointer and returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
