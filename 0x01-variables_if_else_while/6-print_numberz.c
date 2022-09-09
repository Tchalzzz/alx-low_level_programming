#include <stdio.h>

/**
 * main - Prints Decimal numbers between 0 to 9 using putchar only
 *
 * Description: The program prints 0 to 9 using putchar only
 *
 * Return: 0 - Success
 */
int main(void)
{
	/* Variable declarations */
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar (i);
	}
	putchar ('\n');
	return (0);
}
