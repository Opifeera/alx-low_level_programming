#include "main.h"

int _putchar(char);

/**
 * puts2 - prints every other character of a string
 *
 * @str: input
 *
 * Return: result
 */
void puts2(char *str)
{
	int j = 0;

	for (; str[j] != '\0'; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
		else
			continue;
	}
	_putchar('\n');
}
