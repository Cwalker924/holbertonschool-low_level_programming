#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initalize dog structure
 * @d: dog structure pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
