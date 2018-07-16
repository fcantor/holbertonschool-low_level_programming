#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program multiplies two numbers
 * @argc: The number of arguments passed to the program
 * @argv: The string of arguments passed to the program
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
