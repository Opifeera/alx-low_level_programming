#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: first string param
 * @src: second string param
 *
 * Return: String
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, n;

	while (dest[len])
		len++;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[len] = src[n];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
