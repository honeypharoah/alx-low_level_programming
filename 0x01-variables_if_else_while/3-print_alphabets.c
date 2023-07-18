#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	/*print Lower case alphabet letters */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	/*print Upper case alphabet letters */
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	/* print a newline */
	putchar('\n');

	return (0);
}
