#include <stdio.h>
/**
 * main - Entry point
 *
 * @inte - Holds integer data
 * @lint - Holds long integer
 * @llint- Holds long long integer type
 * @flo  - Holds float data type
 * @char - Holds character data
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;
	long int c;
	long long int d;
	float f;
	char a;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %zu bytes(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %zu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %zu bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %zu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
