#include "main.h"

/**
 * char *_strcpy - copy one string to another
 *
 * @dest: input
 * @src: input
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
		dest[j] = src[j];
	return (dest);
}
