#include "main.h"

/**
 * leetch - the leet challenge
 *
 * @y: characters param
 *
 * Return: String
 */
char *leetch(char *y)
{
	int i = 0, j, k = 5;

	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char tw[5] = {'4', '3', '0', '7', '1'};

	while (y[i])
	{
		j = 0;

		while (j < k)
		{
			if (y[i] == tr[j] || y[i] - 32 == tr[j])
				y[i] = tw[j];
			j++;
		}
		i++;
	}
	return (i);
}
