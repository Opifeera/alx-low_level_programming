#include "main.h"

/**
 * print_triangle - function that prints a triangle
 *
 * @size: size
 *
 * Return: Triangle of size
 */
void print_triangle(int size)
{
	int c, r, t;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (r = 0; r <= (size - 1); r++)
		{
			for (c = 0; c < ((size - 1) - r); c++)
				_putchar(' ');
			for (t = 0; t <= r; t++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
