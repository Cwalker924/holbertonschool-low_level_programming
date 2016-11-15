#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new structure for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog_t otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogy;

	dogy = malloc(sizeof(dog_t));
	if (dogy == NULL)
		return (NULL);

	dogy->name = name;
	dogy->age = age;
	dogy->owner = owner;

	return (dogy);
}
