#include <stdio.h>
#include <<stdlib.h>
#include <time.h>

/**
 * main - generates password for 101 crackk me
 * Return 0 -Success
 */
int mai(void)
{
	iint sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar (c);
	}
	putchar(2772 - sum);
	return (0);
}
