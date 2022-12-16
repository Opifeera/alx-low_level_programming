#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int row, col;

	while (row <= 10)
	{
		while (col < 14)
		{
			if (col >= 10)
				_putchar((col / 10) + '0');
			_putchar((col % 10) + '0');
			col++;
		}
		_putchar('\n');
		row++;
	}
}
