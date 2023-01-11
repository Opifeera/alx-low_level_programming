#include "main.h"

/**
 * create_array - function creates an array of chars
 *
 * @size: size of array
 * @c: param 2
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *buf;
	unsigned int pos;

	if (size == 0)
		return (NULL);

	buf = (char *) malloc(size * sizeof(c));

	if (buf == 0)
		return (NULL);
	else
	{
		pos = 0;
		while (pos < size)
		{
			*(buf + pos) = c;
			pos++;
		}
		return (buf);
	}
}
