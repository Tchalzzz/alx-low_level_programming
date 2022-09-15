#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit (0 through 9)
 * Prototypee: int _isdigit(int c)
 * @c: integer
 * Return: 1 if c is a digi else 0
 */
int  _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
