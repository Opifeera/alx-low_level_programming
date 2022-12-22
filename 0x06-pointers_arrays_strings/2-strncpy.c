#include "main.h"

/**
 * _strncpy - copies src to dest
 *
 * @dest: first string
 * @src: second string
 * @n: number of bytes to be copied
 *
 * Return: pointer to string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (src[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = len; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
