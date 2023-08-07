#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * @argc: size of argv array
 * @argv: an array of the size of argc
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s \n", argv[0]);
	}

	return (0);
}
