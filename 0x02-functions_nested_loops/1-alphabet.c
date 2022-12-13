#include "main.h"

/**
 * print_alphabet - prints lower case alphabet
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int lc;
	lc = 'a';

	for(lc = 'a', lc <= 'z'; lc++)
	{
		_putchar(lc);
	}
	_putchar('\n');
}
