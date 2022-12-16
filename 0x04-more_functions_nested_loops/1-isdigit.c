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
	if ((!(c >= 'A' && c <= 'Z')) || (!(c >= 'a' && c <= 'z')))
		return (1);
	else
		return (0);
}
