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
	int sum = 0, i;
	char lr = s[0];

	while (lr != '\0')
	{
		sum++;
		lr = s[i++];
	}
	return (sum);
}
