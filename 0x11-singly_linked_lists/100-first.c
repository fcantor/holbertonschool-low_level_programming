#include <stdio.h>
#include "lists.h"

void print(void) __attribute__((constructor));

/**
 * print - This function prints a sentence before main is executed
 */

void print(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my houseupon my back!\n");

}
