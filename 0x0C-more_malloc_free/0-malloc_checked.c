#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: param
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *a;
	
	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
