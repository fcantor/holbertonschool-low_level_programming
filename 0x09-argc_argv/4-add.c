#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - This program adds positive numbers
 * @argc: The number of arguments passed to the program
 * @argv: The string of arguments passed to the program
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int sum, i, j;

	if (argc > 3)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[j] != '\0'; j++)
			{
				if (!isdigit(*argv[j]))
				{
					printf("Error\n");
					return (1);
				}
				else
					sum += atoi(argv[i]);
			}
		}

		printf("%i\n", sum);
	}
	return 0;
}
