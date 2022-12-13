#include "main.h"

/**
 * _islower - checks for a lower case character
 *
 * @c: character to be checked
 *
 * Return: checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
