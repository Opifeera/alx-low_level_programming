#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int row, col;

	for (col = 0; col < 10; col++)
	{
		for (row = 0; row <= 14; row++)
		{
			if (row >= 10)
				_putchar((row / 10) + '0');
			_putchar((row % 10) + '0');
		}
		_putchar('\n');
	}
}
