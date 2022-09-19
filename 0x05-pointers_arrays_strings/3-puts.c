#include "main.h"

/**
 * _puts - puts a string and a new line
 * @str: pointer to a string to print
 *
 * Return: 0
 */
void puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
