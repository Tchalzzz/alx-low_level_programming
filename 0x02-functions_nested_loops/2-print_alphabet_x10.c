#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		i++;
	}
}
