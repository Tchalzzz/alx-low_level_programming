#include "main.h"
/**
 * print_diagonal - prints '\'nn times
 * @n: integer, specifies the number of times '\'should be printed
 * Return: null/void
 */
void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n && n > 0)
	{
		j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}

	if (i == 0)
		_putchar('\n');
}
