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

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ln = 0; ln <= n; ln++)
			_putchar('_');
		_putchar('\n');
	}


}
