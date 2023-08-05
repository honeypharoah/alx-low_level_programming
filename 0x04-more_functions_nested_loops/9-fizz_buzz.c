#include <stdio.h> 

/**
 * main - entry point
 * return: always 0.
 */

int main(void)
{
	/* print 1 to 100 followed by a new line */
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}

		else if (i % 3 == 0)
                {
                        printf("Fizz");
                }

                else if (i % 5 == 0)
                {
                        printf("Buzz");
                }

		else
		{
			printf("%d ", i);
		}
		
		if (i < 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
