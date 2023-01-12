#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string
 * @n: element number
 *
 * Return: pointer to array
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int ss1 = 0, ss2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[ss1] != '\0')
	{
		ss1++;
	}

	while (s2[ss2] != '\0')
	{
		ss2++;
	}

	if (n > ss2)
	n = ss2;
	a = malloc((ss1 + n + 1) * sizeof(char));

	if (a == NULL)
		return (0);

	for (i = 0; i < ss1; i++)
	{
		a[i] = s1[i];
	}

	for (; i < (ss1 + n); i++)
	{
		a[i] = s2[i - ss1];
	}
	a[i] = '\0';

	return (a);
}
