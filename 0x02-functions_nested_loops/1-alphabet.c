#include "main.h"

/**
 * main - prints alphabet in lower case
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int i;
	i = a;

	for(i = 'a', i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
