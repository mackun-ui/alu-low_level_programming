#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10, from 0 to 9,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		printf("%d", i);

	printf("\n");

	return (0);
}
