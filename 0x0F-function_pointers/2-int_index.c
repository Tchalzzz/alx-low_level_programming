#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - function
 * @array: pointer
 * @size: integer
 * @cmp: pointer to function
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
