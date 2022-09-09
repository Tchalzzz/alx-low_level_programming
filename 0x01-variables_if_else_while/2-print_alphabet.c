#include <stdio.h>
/**
 * main - Prints characters a to z on the sreen
 *
 * Description: Prints letters a-z
 *
 * Return: 0 - Success
 */
int main(void)
{
	/* variable declaration */
	int ch;
	/* Loop from a to z and print each cahracter followed by a new line */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
		getchar ();
	}
	return (0);
}
