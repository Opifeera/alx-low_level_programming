#include "main.h"

/**
 * _strncat - concatenates two string using n bytes of src
 *
 * @dest: first string param
 * @src: second string param
 * @n: number of bytes
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];
	return (dest);
}
