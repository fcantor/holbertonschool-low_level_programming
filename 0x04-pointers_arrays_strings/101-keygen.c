#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This program generates random valid passwords for the program
 * 101-crackme
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, random, sum;
	char alphabet[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char password[100];

	srand(time(NULL));
	sum = 0;
	i = 0;

	while (sum < (2772 - 122))
	{
		r = rand() % 62;
		password[i] = array[r];
		sum = sum + password[i];
		i++;
	}

	r = 2772 - sum;
	password[i] = r;
	i++;
	password[i] = '\0';
	printf("%s", password);

	return (0);
}
