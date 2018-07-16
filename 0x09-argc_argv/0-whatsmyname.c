#include "holberton.h"
#include <stdio.h>
#define UNUSED(argc) (void)(argc)

/**
 * main - This program prints its name, followed by a newline
 * @argc: The number of command line arguments
 * @argv: The string of command line arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	UNUSED(argc);

	printf("%s\n", argv[0]);

	return (0);
}
