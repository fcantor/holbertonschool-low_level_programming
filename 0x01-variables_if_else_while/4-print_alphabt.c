#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase
 * but skips the letters q and e, using only putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}

	putchar('\n');

	return (0);
}
