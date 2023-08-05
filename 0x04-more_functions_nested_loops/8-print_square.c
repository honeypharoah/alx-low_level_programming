#include "main.h"

/**
 * print_square - print squares
 * @size: size of the square
 * return: squre
 */

void print_square(int size)
{
	int length, width;

	if (size > 0)
	{
		for (length = 1; length <= size; length++)
		{
			for (width = 1; width <= size; width++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}

}
