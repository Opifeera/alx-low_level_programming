#include "main.h"

/**
 * swap_int - function that swaps
 *
 * @a: input
 * @b: input
 *
 * Return: swapped
 */
void swap_int(int *a, int *b)
{
	int num;
	
	num = *a;
	*a = *b;
	*b = num;
}
