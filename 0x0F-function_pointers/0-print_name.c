#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints name
 *
 * @name: name to be entered
 * @f: pointer to function that prints
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
