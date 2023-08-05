#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 *
 * @n: number of _
 *
 * Return: a straight line
 */

void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		_putchar('_');
	}

	_putchar('\n');
}
