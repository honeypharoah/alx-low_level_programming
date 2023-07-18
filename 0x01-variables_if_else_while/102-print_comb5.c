#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, x, y;

	/*First 2 digits*/
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (x = 0; x <= 9; x++)
			{
				for (y = 0; y <= 9; y++)
				{
					int num1 = i * 10 + j;
					int num2 = x * 10 + y;

					if (num1 < num2)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(x + '0');
						putchar(y + '0');

						if (i != 9 || j != 8 || x != 9 || y != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
