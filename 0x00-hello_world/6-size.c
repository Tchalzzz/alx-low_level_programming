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

	printf("Size of a char: %ld bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %ld bytes(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %ld bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %ld bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %ld bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
