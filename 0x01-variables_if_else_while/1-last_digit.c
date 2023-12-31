#include <stdlib.h>
#include <time.h>

/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	/* your code goes there */
	printf("Last digit of %d is ", n);

	if (last_digit > 5)
	{
		printf("%d and is greater than 5\n", last_digit);
	}

	else if (last_digit == 0)
	{
		printf("%d and is 0\n", last_digit);
	}

	else
	{
		printf("%d and is less than 6 and not 0\n", last_digit);
	}

	return (0);

}
