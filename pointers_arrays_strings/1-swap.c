#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @n: pointer to the first integer
 * @: pointer to the second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
