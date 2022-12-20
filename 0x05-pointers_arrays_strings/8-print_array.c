#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array
 *
 * @a: input 1
 * @n: input 2
 *
 * Return: an array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
		if (i == (n - 1))
			printf("%d", a[n - 1]);
	}
	printf("\n");
}
