#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/*Print all the numbersof base 16*/

	int n;
	char l;

	/*Print the first 10 numbers of base 16*/

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}

	/*Print base 16 from 10 to 15*/

	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}

	putchar('\n');

	return (0);

}
