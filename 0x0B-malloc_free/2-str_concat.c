#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - finds the length of a string
 *
 * @s: string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * str_concat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i , j, size;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = (_strlen(s1) + _strlen(s2) + 1);

	s = (char *) malloc(size * sizeof(char));

	if (s == 0)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(s + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(s + i) = *(s2 + j);
		i++;
	}
	return (s);
}
