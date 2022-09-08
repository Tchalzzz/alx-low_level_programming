#include <stdio.h>
/**
 * main-Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{

	printf("Size of a char: %ld bytes(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %ld bytes(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %ld bytes(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %ld bytes(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %ld bytes(s)\n", (unsigned long)sizeof(float));
	return (0);
}
