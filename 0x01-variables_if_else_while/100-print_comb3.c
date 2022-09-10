#include <stdio.h>
/**
 * main - Prints all possible combinations of two digits
 *
 * Return: 0 - Success
 */
int main(void)
{
	int c, j;

	for (c = '0'; i <= 9; i++)
	{
		for (i = '0'; j <= 58; i++)
		{
			if (c < i)
			{
				putchar (c);
				putchar (i);

				if (c != '8'|| (c == '8' && i != '9'))
				{
				putchar (',');
				putchar (' ');
				}
			}
		}
	}	
	putchar ('\n');
	return (0);
}
