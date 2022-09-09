#include <stdio.h>
/**
 * main - Prints letters a-z and A-z
 *
 * Return: 0 -Successful
 *
 */
int main(void)
{
	/* Declare variables */
	int ch;
	/* print lowercase letters */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	/* print uppercase letters */
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);

}
