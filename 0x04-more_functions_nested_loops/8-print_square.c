#include "main.h"

/**
 * print_square - prints a  suare using #
 * Prototype: void print_square(int size);
 * @size: Size of the square
 * Return: null/void
 */
void print_square(int size)
{
	int i = 0, j;

	while (i < size && size > 0)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}

	if (i == 0)
		_putchar('\n')
}
