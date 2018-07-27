#include <stdio.h>

/**
 * op_add - This function returns the sum of a and b
 * @a: The first int to add
 * @b: The second int to add
 * Return: The integer sum of both a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This function returns the difference of a and b
 * @a: The first difference operator
 * @b: The second difference operator
 * Return: The difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This function returns the product of a and b
 * @a: The first int to multiply
 * @b: The second int to multiply
 * Return: The product of both a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - This function returns the result of the division of a by b
 * @a: The int dividend
 * @b: The int divisor
 * Return: The quotient without remainder of a divided by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - This function returns the remainder of the division of a by b
 * @a: The int dividend
 * @b: The int divisor
 * Return: The remainder from the quotient of a divided by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
