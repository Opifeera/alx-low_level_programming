#include "main.h"

/**
 * print_alphabet - prints lower case alphabet
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	int lc;

	for(lc = 'a', lc <= 'z'; lc++)
	{
		_putchar(lc);
	}
	_putchar('\n');
}
