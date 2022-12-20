#include "main.h"

/**
 * char *_strcpy - copy one string to another
 *
 * @dest: copy to
 * @src: copy from
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
