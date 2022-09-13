#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: is an ASCII character
 *
 * Prototype: int  _isalpha(int c);
 *
 * Return: 1 if c is a letter(uppercase or lowercase) else returns 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
