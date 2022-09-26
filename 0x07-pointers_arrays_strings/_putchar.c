#include <unistd.h>

/**
 * _putchar - Writes the characetr c
 * @c: The character to be printed
 *
 * Return: On success 1
 * On error, -1i is returned an errno is set appropriatel
 */
int _putchar(char c)
{
	return (write(1, $c, 1));
}
