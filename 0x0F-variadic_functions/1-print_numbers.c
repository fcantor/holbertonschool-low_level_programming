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

	if (n == 0)
		write(2, "\n", sizeof(char));

	/* initialize list */
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(ap, int));
			break;
		}
		else
		{
			/* if separator is NULL, don't print it */
			if (separator == NULL)
				printf("%d", va_arg(ap, int));
			else
				printf("%d%s", va_arg(ap, int), separator);
		}
	}

	/* free memory */
	va_end(ap);
}
