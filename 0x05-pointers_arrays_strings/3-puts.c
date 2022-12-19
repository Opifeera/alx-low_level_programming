#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * @str: string
 *
 * Return: String
 */
void _puts(char *str)
{
	int a;

	for (a = 0; a != str[a]; a++)
		_putchar(str[a]);
	_putchar('\n');
}
