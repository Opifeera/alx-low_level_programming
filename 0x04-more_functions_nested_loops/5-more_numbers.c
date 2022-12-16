#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int row, col;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 14; col++)
		{
			if (col >= 10)
				_putchar((col / 10) + '0');
			_putchar((col % 10) + '0');
		}
		_putchar('\n');
	}
}
