#include "main.h"

/**
 * _isdigit - checks if input is a digit
 *
 * @c: To be checked
 *
 * Return: Checked
 */
int _isdigit(int c)
{
	if (c > 48 && c <= 57)
		return (1);
	else
		return (0);
}
