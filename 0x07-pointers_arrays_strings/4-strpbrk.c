#include "main.h"

/**
 * _strpbrk - sesrches for a string for any of a set
 * @s: The string to be searched
 * @accept: The set of bytes to be searched
 *
 * Return: If a set is matched - a pointer to the matched byte
 * if no set is matched - NULL
 */

char *_strp(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index]
				return (s);
		}
		s++;
	}
	return ('\0');
}
