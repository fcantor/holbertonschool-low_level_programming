#include <stdio.h>

void __attribute__((constructor)) print(void);

/**
 * print - This function prints a sentence before main is executed
 */

void print(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my houseupon my back!\n");

}
