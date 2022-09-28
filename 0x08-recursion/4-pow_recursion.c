#include "main.h"

/**
 * _pow_recursion - Function that generates the power of a number
 * @x: Number whose power is to be generated
 * @y: The index
 * Return: -1, if power is less than  0, 1 if power is 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));}
