#include "holberton.h"

/**
 * main - This program prints the phrase Hello, World
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch[13] = "Hello, World";
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		_putchar(ch[i]);
	}

	_putchar('\n');
	return (0);
}
