#include "main.h"

/**
 * print_line - printing a line with _ character
 *
 * @n: number of _
 *
 * Return: Line
 */
void print_line(int n)
{
	int ln;

	for (ln = 0; ln < n; ln++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
		_putchar('\n');
	}

}
