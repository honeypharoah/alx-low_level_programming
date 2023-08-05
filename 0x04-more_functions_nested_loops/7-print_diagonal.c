#include "main.h"

/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: number of times the character \ should be printed
 * return: diagonal line
 */

void print_diagonal(int n)
{
	int line;

	for (line = n; line > 0; line--)
	{
		_putchar(' ');
	}

	_putchar('\\');
	_putchar('\n');
}
