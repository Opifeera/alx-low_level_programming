#include "main.h"

/**
 * print_square - prints a square using #
 *
 * @size: size of a square
 *
 * Return: Square
 */
void print_square(int size)
{
	int row, col;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (col = 1; col <= size; col++)
			_putchar('#');
			for (row = 1; row <= size; row++)
				_putchar('#');
			_putchar('\n');
	}
}
