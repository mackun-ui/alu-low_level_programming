#include <stdio.h>

/**
 * main - prints all base 16 digits in lowercase,
 * followed by a new line
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');

	for (i = 0; i <= 5; i++)
		putchar(i + 'a');

	putchar('\n');

	return (0);
}
