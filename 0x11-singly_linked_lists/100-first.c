#include <stdio.h>
#include "lists.h"

void __attribute__((constructor)) print();

/**
 * print - This function prints a sentence before main is executed
 */

void print(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my houseupon my back!\n");

}
