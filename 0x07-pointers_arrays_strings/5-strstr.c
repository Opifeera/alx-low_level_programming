#include "main.h"

/**
 * _strstr - searches first occurence of substring
 *
 * @haystack: string in which substring is to be searched
 * @needle: string to be searched
 *
 * Return: substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i - 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
