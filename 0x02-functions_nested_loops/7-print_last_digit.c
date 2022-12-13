#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @last: digit
 *
 * Return: Last digit of a number
 */
int print_last_digit(int last)
{
	int num;

	num = (last % 10);

	if (num < 0)
		num = (num * -1);

	_putchar(num + '0');
	return (num);
}
