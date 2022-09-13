#include "main.h"

/**
 * _abs - computes the absolute value of  an integer
 *
 * Prototype: int _abs(int);
 * @n: This is a real number
 *
 * Return: Absolute value or 0
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (0);
	}
}
