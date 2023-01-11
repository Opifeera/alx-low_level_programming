#include "main.h"
#include <stddef.h>
#include <stdlib.h>

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
	int a = 0, b = 0, i ,j;
	char *s;
	char *nll = "";

	if (s1 == NULL)
		s1 = nll;
	if (s2 == NULL)
		s2 = nll;

	while (*(s1 + a))
		a++;
	while (*(s2 + b))
		b++;

	s = malloc(sizeof(char) * (a + b + 1));

	if (s == 0)
		return (0);

	for (i = 0; i < a; i++)
		*(s + i) = *(s1 + i);

	for (i = 0; j = a; i <= b; j++, i++)
		*(s + j) = *(s2 + i);
	return (s);
}
