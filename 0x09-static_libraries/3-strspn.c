#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring
 *
 * @s: string
 * @accept: prefix to be measured
 *
 * Return: length of prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bt = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bt++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bt);
		}
		s++;
	}
	return (bt);
}
