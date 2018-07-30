#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_i - This function prints integers
 * @list: List of arguments
 * @sep: Separator
 */

void print_i(va_list list, char *sep)
{
	printf("%s%d", sep, va_arg(list, int));
}

/**
 * print_c - This function prints characters
 * @list: Character arguments
 * @sep: Separator
 */

void print_c(va_list list, char *sep)
{
	printf("%s%c", sep, va_arg(list, int));
}

/**
 * print_s - This function prints strings
 * @list: List of arguments
 * @sep: Separator
 */

void print_s(va_list list, char *sep)
{
	char *s;

	/* assign string to pointer */
	s = va_arg(list, char *);

	if (s == NULL)
		s = "(nil)";

	printf("%s%s", sep, s);
}

/**
 * print_f - This function prints floats
 * @list: List of arguments
 * @sep: Separator
 */

void print_f(va_list list, char *sep)
{
	printf("%s%f", sep, va_arg(list, double));
}

/**
 * print_all - This function prints out all types of specifiers
 * @format: The list of variable arguments
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *sep;
	int i, j;

	/* store format specifier types in an array */
	fm_t fm[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	/* initialize list */
	va_start(ap, format);

	/* initialize variables */
	i = 0;
	sep = "";

	/* loop through format */
	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == *(fm[j]).fm)
			{
				fm[j].p(ap, sep);
				sep = ", ";

			}
			j++;
		}
		i++;
	}

	/* add newline */
	printf("\n");

	/* free memory */
	va_end(ap);
}
