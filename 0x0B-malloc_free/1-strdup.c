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

	i = 0;
	while (*(str + i))
		i++;
	s = malloc(sizeof(char) * i + 1);

	if (s == 0)
		return (0);
	for (j = 0; j <= i; j++)
		*(s + j) = *(str + j);
	return (s);
}
