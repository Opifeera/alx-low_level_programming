#include "main.h"

/**
 * _strlen - function returns length of a string
 *
 * @s: input string
 *
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int sum, i, j;

	sum = 0;
	for (i = 0; i <= strlen(*s); i++)
	{
		sum++;
	}
	return (sum);
}
