#include "main.h"

/**
 * print_last_digit - print last digit of a number
 *
 * @i: input number as integer
 *
 * Return: value of last digit
 */

int print_last_digit(int i)
{
	int n = i % 10;

	if (n < 0)
	{
		_putchar(-n + '0');
		
		return (-n);
	}

	else
	{
		_putchar(n + '0');

		return (n);
	}

}
