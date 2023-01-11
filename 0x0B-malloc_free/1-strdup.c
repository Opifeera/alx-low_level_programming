#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 *
 * @str: string
 *
 * Return: pointer to the string
 */
char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == NULL)
		return (0);

	j = 0;
	while (*(str + 1))
		j++;
	s = malloc(sizeof(char) * j + 1);

	if (s == 0)
		return (0);
	for (i = 0; i <= j; i++)
		*(s + 1) = *(str + 1);
	return (s);
}
