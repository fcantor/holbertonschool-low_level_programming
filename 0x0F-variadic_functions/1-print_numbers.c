#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - This function prints numnbers followed by a newline
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* declare a list to store the variable arguments */
	va_list ap;

	/* counter variable declaration */
	unsigned int i;

	/* check if n is NULL */
	if (n == 0)
		return;

	/* initialize list */
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		/* print integer */
		printf("%d", va_arg(ap, int));

		/* print separator while not second to last var */
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	/* free memory */
	va_end(ap);

	/* newline at the end of file */
	printf("\n");
}
