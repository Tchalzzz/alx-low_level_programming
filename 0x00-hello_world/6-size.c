#include <stdio.h>
/**
 * main-Entry point
 * @a-
 * @b
 * @c
 * @d
 * @f
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;
	long int c;
	long long int d;
	float f;
	char a;

	printf("Size of a char: %d bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %d bytes(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %d bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %d bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %d bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
