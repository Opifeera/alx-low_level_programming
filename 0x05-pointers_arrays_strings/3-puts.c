#include "main.h"

int _putchar(char);

/**
 * _puts - prints a string to stdout
 *
 * @str: string
 *
 * Return: String
 */
void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
