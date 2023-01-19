#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array to search
 * @size: array size
 * @cmp: pointer for comparing
 *
 * Return: depending on condition
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != 0))
				return (i);
		}
	}
	return (-1);
}
