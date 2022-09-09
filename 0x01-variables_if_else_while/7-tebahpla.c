#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse order
 *
 * Return: 0 - Success
 */
int main(void)
{
	/*Variable declarations*/
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
