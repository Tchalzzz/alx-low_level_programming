#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints dog info.
 * @dog: struct wit labe dog
 */

void print_dog(struct dog *d)
{
	id (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name != NULL ? d->name: "nil)", (*d).age, (*d).owner != NULL ? d->owner : "(nil)");
	}
}
