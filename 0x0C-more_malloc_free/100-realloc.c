#include "main.h"

/**
* *_realloc - reallocates a memory block that was
* previously allocated
* @ptr: array length
* @old_size: size of old memory block
* @new_size: size of new memory block
* Return: Pointer or NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return ((void *)malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (old_size > new_size)
		old_size = new_size;

	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return ((void *)p);
}
