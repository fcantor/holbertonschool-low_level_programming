#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - This function returns the sum of all its parameters
 * @n: The number of arguments
 * @...: Variable arguments passed into the function
 * Return: An integer sum of all the int arguments passed into the function
 */

int sum_them_all(const unsigned int n, ...)
{
	/* macro for creating an argument list */
	va_list ap;

	/* counter var */
	unsigned int i, sum = 0;

	/* make sure there more than 0 arguments */
	if (n == 0)
		return (0);

	/* set start of list */
	va_start(ap, n);

	/* while argument list hasn't ended, sum up all arguments */
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	/* free memory */
	va_end(ap);

	/* return sum */
	return (sum);
}
