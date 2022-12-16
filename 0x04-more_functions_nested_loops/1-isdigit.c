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
	if (isdigit(c))
		return (1);
	else
		return (0);
}
