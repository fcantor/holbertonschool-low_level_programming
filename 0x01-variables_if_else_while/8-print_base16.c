#include <stdio.h>

/**
 * main - This program prints all the numbers of base 16
 * in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch, i;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'F'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
