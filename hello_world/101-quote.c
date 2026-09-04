#include <unistd.h>

/**
 * main - prints a quote to standard error
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, quote, 59);

	return (1);
}
