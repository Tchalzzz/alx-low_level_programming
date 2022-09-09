#include <stdio.h>
/**
 * main - prints single digit numbers 0 to 9
 *
 * Return: 0 - Success
 */
int main(void)
{
	/* Variable declaration */
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
