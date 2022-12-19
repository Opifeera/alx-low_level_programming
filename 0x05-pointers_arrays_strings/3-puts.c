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

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
