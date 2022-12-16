#include "main.h"

/**
 * _isupper - determines if character is upper case
 *
 * @c: character to be tested
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
