#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type dog
 *
 * @d: param 1
 * @name: param 2
 * @age: age
 * @owner: owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
