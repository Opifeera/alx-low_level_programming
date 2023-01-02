#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: param 1
 * @b: param 2
 * @n: param 3
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
