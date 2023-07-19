#include "main.h"

/**
 *_islower - checks for lowercase characters
 *
 * @c: the character in ASCII code
 *
 * Return: 1 if c is lowercase
 * otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
