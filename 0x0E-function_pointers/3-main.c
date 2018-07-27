#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - This program performs simple mathematical computations
 * @argc: The number of arguments passed from the command line
 * @argv: An array containing the arguments passed from the command line
 * Return: 0 if successful, 98 for incorrect number of arguments,
 * 100 for error of division by 0
 */

int main(int argc, char *argv[])
{
	char *s, operator;
	int a, b, ans;
	int (*p)(int, int);

	/* check to make sure number of arguments passed from command line */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* assign operator argument to operator variable for an easier check */
	operator = argv[2][0];

	/* make sure operator variable is valid, or not equal to null */
	if ((operator != '*' && operator != '+' && operator != '-'
	     && operator != '/'  && operator != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* assign number argument operators to int var for easier check */
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/* make sure division isn't by 0 */
	if ((operator == '/' || operator == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* check sign */
	s = argv[2];
	/* assign function to pointer */
	p = get_op_func(s);
	/* assign return value to answer variable */
	ans = (*p)(a, b);
	/* print answer variable */
	printf("%d\n", ans);

	return (0);
}
