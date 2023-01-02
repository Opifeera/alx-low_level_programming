#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string in which a character is to be found
 * @c: character to be found
 *
 * Return: located character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
