#include "function_pointers.h"

/**
 * print_name - This function prints a name
 * @name: A character pointer
 * @f: A function that takes a char pointer and returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	/* create separate function pointer that takes a char returns nothing */
	void (*func_ptr)(char *);

	/* assign passed function pointer to new function pointer */
	func_ptr = f;
	/* call function with name argument that was passed */
	func_ptr(name);
}
