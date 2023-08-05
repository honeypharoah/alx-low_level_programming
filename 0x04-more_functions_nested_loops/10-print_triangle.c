#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: triangle
 */

void print_triangle(int size)
{
	int height, width, draw;

	if (size > 0)
	{
		for (height = 1; height <= size; height++)
		{
			for (width = 1; width <= (size - height); width++)
			{
				_putchar(' ');
			}
			
			for (draw = 1; draw <= height; draw++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
