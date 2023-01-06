#include "main.h"

int _putchar(char c);
/**
 * _strlen_recursion - function prints the length of a string
 *
 * @s: string
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
