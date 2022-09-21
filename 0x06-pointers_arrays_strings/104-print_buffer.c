#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - determines if n  is  a printable ASCII char
 * @n: integer
 * Return: 1 if true, 0 if false
 */
isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes - prints hex values for string b in formatted fform
 * @b: string to prinnt
 * @start: starting position
 * @end: ending position
 */
void printHexes(char *b, int start, int end)
{
	int i;

	while (i  < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf(" ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printASCII - prints ASCII values for string b
 * formatted to replace nonprintable characters with '.'
 * @b: string to print
 * @start: starting position
 * @end: endinng position
 */
void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if(!isPrintableASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - prints  a buffer
 * @b: string
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII((b, start, end);
			printf("\n");
		}
	}

	else
		printf("\n");
}
