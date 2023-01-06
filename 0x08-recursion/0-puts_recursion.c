#include "main.h"

int _putchar(char c);
/**
 * _puts_recursion - prints a string
 *
 * @s: pointer to string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_putchar(*s + 1);
	}
	else
		_putchar('\n');
}
