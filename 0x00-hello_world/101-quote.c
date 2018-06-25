#include <unistd.h>

/**
 * main - This program prints a sentence and a date, followed
 * by a new line, to the standard error
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\"", 33);
	write(2, "- Dora Korpar, 2015-10-19\n", 26);
	return (1);
}
