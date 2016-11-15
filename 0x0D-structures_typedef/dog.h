#ifndef DOG_H
#define DOG_H

/**
 * struct Dog - structure of a Dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 *
 * Description: defines a dog by name age and it's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
