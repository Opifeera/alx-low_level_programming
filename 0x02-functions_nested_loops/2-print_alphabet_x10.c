#include "main.h"

/**
 * 2-print_alphabet_x10 - prints the alphabet in lower case ten times (x10)
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int lc, j;

	for (lc = 0; lc <= 10; lc++)
	{
		for (j = 'a'; j <= 'z'; j++){
			_putchar(j);
		}
	_putchar('\n');
	}
}
