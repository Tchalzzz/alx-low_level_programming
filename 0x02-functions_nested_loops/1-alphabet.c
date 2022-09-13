#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Prototype: void print_alphabet(void)
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
