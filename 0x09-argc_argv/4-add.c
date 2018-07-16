#include <stdio.h>

/**
 * main - This program adds positive numbers
 * @argc: The number of arguments passed to the program
 * @argv: The string of arguments passed to the program
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i, j, sum, tmp;

	i = 1;
	sum = 0;

	while (i < argc)
	{
		j = 0;
		tmp = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				tmp = tmp * 10 + argv[i][j] - '0';
			else
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += tmp;
		i++;
	}

	printf("%d\n", sum);

	return (0);
}
