#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints attributes of the structure info.
 * @d: new instance
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL && (*d).owner == NULL)
		{
			printf("Name: (nil)\nAge: %f\nOwner: (nil)\n", d->age);
		}
		else
		{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
		}
	}
}
