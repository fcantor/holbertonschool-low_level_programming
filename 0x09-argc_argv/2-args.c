#include "holberton.h"
#include <stdio.h>

/**
 * main - This program prints all arguments it receives
 * @argc: The number of arguments passed into the program
 * @argv: The strings passed into the program
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", *(argv + i));

	return (0);
}
