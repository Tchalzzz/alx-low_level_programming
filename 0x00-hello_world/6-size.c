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
	int inte;
	long int lint;
	long long int llint;
	float flo;
	char cha;

	printf("Size of a char: %zu bytes(s)", sizeof(cha));
	printf("Size of an int: %zu bytes(s)", sizeof(inte));
	printf("Size of a long int: %zu bytes(s)", sizeof(lint));
	printf("Size of a long long int: %zu bytes(s)", sizeof(llint));
	printf("Size of a float: %zu bytes(s)", sizeof(flo));
	return (0);
}
