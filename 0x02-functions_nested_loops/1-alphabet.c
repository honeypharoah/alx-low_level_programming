#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void);
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	return (0);
}
