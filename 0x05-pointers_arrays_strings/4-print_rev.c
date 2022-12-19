#include "main.h"

int _putchar(char);

/**
 * print_rev - Prints in reverse
 *
 * @s: input
 *
 * Return: Reverse order
 */
void print_rev(char *s)
{
	int forward = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
		forward++;
	for (n = (forward - 1); n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');	
}
