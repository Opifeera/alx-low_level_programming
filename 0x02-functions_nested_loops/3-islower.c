#include "main.h"

/**
 * _islower - checks for a lower case character
 *
 * Returns: checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
