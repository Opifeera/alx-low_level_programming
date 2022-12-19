#include "main.h"

/**
 * rev_string - Reverse a string
 *
 * @s: input
 *
 * Return: reversed string
 */
void rev_string(char *s)
{
	char reverse = s[0];
	int foward = 0;
	int i;

	while (s[foward] != '\0')
		foward++;

	for (i = 0; i < foward; i++)
	{
		foward--;
		reverse = s[i];
		s[i] = s[foward];
		s[foward] = reverse;
	}
}
