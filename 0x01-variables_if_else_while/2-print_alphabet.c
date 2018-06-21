#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase
 * and uses the control loop for, and the function putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	return (0);
}
