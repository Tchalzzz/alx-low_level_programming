#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: is an ASCII character
 *
 * Protoype: int _islower(int c);
 *
 * Return: 1 if c is lower else returns 0
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	return (0);
}
