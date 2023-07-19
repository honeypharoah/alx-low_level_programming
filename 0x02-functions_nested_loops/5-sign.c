#include "main.h"

/**
 * print_sign - determines if the input number is greater than, equal to or less than 0
 *
 * @n: the input number is an integer
 *
 * Return: 1 if n is greater than 0
 *	0 if n is 0
 *	-1 if n is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');

		return (0);
	}

	else
	{
		_putchar('-');

		return (-1);
	}
}
