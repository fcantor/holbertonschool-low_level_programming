#include <stdio.h>
#define UNUSED(argv) (void)(argv)

/**
 * main - This program prints the number of arguments passed into it
 * @argc: The number of arguments passed into the program
 * @argv: The array of arguments passed into the program
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	UNUSED(argv);

	printf("%i\n", argc - 1);

	return (0);
}
