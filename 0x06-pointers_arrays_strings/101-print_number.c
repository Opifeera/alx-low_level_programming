#include "main.h"

int _putchar(char c);
/**
 * print_number - prints an integer
 *
 * @n: integer param
 *
 * Return: integer
 */
void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		_putchar('-');
		a = -a;
	}
	if ((a / 10) > 0)
		_putchar(a / 10);
	_putchar((a % 10) + '0');
}
