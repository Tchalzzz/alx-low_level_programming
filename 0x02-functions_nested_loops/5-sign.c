#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 *
 * Prototype: int print_sign(int n);
 * @n: integer
 *
 * Return: 0 if zero, 1 if > 0 and -1 if < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);

	}
	_putchar(0);
	return (0);
}
