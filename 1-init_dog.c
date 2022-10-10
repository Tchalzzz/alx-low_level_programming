#include "dog.h"

/**
 * init_dog - initializes the variable d of type
 * dog(struct)
 * @d: Pointer to struct
 * @name: member 1
 * @age: member 2
 * @owner: member 3
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
