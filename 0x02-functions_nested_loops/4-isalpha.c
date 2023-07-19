#include "main.h"

/**
 *_isalpha - checks for alphabetic characters
 *
 * @c: the character in ASCII code
 *
 * Return: 1 if c is a letter
 *	otherwise return 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
