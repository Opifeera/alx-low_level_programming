#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: array param
 * @n: number of elements
 *
 * Return: reverse order
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = (n - 1); i >= n; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
