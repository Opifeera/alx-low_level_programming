#include "main.h"

/**
 * print_diagonal - function that prints diagonal line
 *
 * @n: number of occurances of diag
 *
 * Return: Diagonal
 */
void print_diagonal(int n)
{
	int v, h;

	if(n <= 0)
		_putchar('\n');
	else
	{
		for (v = 1; v <= n; v++)
		{
			for (h = 1; h <= v; h++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
