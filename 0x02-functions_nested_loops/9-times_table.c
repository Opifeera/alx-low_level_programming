#include "main.h"

/**
 * times_table - prints multiplicatin table x9
 *
 * Return: times table
 */
void times_table(void)
{
	int row, col, n;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (col = 1; col <= 9; col++)
		{
			n = (row * col);
			if ((d / 10) > 0)
				_putchar((n / 10) + '0');
			else
				_putchar(' ');
			_putchar((d % 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
