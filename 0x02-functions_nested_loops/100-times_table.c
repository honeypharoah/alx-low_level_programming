#include "main.h"

/**
 * print_times_table - print the 9 times table
 *
 * @n: times table integer
 *
 * Return: no return
 */

void print_times_table(int n)
{
        int i;
        int j;
        int k;

        for (i = 0; i <= n; i++)
        {
		if (n < 0 || n > 15)
		break;

                for (j = 0; j <= n; j++)
                {
                        k = i * j;

                        if (j == 0)
                        {
                                _putchar(k + '0');
                        }

                        if (k < 10 && j != 0)
                        {
                                _putchar(',');
                                _putchar(' ');
                                _putchar(' ');
                                _putchar(k + '0');
                        }

                        else if (k >= 10)
                        {
                                _putchar(',');
                                _putchar(' ');
                                _putchar((k / 10) + '0');
                                _putchar((k % 10) + '0');
                        }
                }

                _putchar('\n');
"9-times_table.c" 45L, 540C                                        14,0-1        Top
