#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - main function
 * @d: pointer to structure dog
 * @name: name to return
 * @age: age to return
 * @owner: owner to return
 *Return: always zero
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
