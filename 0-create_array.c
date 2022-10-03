#include <stdlib.h>

/**
 * *create_array - Creates an array of characters
 * and initializes it with a specific character
 * @size: Size of the array
 * @c: Chararter to initialize
 * Return: Pointer to the array initialized or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (size == 0 || m == 0)
		return (0);

	while (size--)
		m[size] = c;
	return (m);
}
