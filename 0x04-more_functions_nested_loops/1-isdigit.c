#include "main.h"

/**
 * _isdigit - checks for digits 0 through 9
 *
 * @c: character input from ASCII code
 *
 * Return: 1 if c is a single digit. 0 for the rest.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
