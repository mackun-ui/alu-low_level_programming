#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by
 * a new line
 * @str: the striong to print half of
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length, n, i;

	length = 0;
	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length - 1) / 2;

	for (i = length - n; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');

}
