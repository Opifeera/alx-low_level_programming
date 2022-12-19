#include "main.h"

int _putchar(char);

/**
 * puts_half - half of the string
 *
 * @str: input
 *
 * Return: Half of the string
 */
void puts_half(char *str)
{
	int j, m, ln;

	ln = 0;

	for (j = 0; str[j] != '\0'; j++)
	{
		ln++;
	}
	m = (ln / 2);

	if ((ln % 2) == 1)
		m = ((ln + 1) / 2);
	for (j = 0; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
