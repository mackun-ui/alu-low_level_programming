#include "main.h"

/**
 * _sqrt_helper - finds the natural square root by testing values of i
 * @n: the number
 * @i: the current candidate
 *
 * Return: the square root of n, or -1 if there is none
 */
int _sqrt_helper(int n, int i)
{
	if (i > n / i)
		return (-1);
	if (i == n / i && n % i == 0)
		return (i);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: the square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (_sqrt_helper(n, 1));
}
