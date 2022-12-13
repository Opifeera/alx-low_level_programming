#include "main.h"

/**
 * print_sign - prints a sign and after checking it
 *
 * @n: number to be checked
 *
 * Return: After checking
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
