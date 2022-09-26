#include "main.h"

/**
 * _strstr - Lovates a substring
 * @haystack: The string to be sesrched
 * @needle: The substring to be lovated
 *
 * Return: If the substirng is located + a pointer to the beginning
 * o the located substring
 * if the substring is not located - NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
