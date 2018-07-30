#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - This function prints strings, followed by a newline
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function
 * Return: 0 for success
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;
	char *str;

	va_start(ap, n);

	/* while variable arguments exist */
	for (i = 0; i < n; i++)
	{
		/* assign string to pointer */
		str = va_arg(ap, char *);

		if (str == NULL)
			printf("(nil)");
		else
		{
			printf("%s", str);
			/* while not the last argument, print separator */
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}

	va_end(ap);
	printf("\n");
}
