#include "main.h"

/**
* _memcpy - copy.memory data from source to destination
* @dest: destination memory location
* @src: source memory location
* @n: size of new memory
*/

void _memcpy(void *dest, void *src, size_t n)
{
size_t i;
char *csrc = (char *)src;
char *cdest = (char *)dest;

for (i = 0; i < n; i++)
cdest = csrc[i];
}

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
void *newPtr;

if (new_size == 0)
{
if (ptr != NULL)
free(ptr);
return (NULL);
}
else if (!ptr)
{
return (malloc(new_size));
}
else if (new_size <= old_size)
{
return (ptr);
}
else
{
newPtr = malloc(new_size);
if (newPtr)
{
_memcpy(newPtr, ptr, old_size);
free(ptr);
}
return (newPtr);
}
return (0);
}
