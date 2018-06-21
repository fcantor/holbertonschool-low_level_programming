#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase
 * and uses the control loop for, and the function putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
