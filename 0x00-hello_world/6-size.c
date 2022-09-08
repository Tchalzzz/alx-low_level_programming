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
	int inte
	long int lint
	long long int llint
	float flo
	char cha

	printf("size of a char: %c bytes(s)\n", sizeof(cha));
	printf("size of an int: %d bytes(s)\n", sizeof(inte));
	printf("size of a long int: %ld bytes(s)\n", sizeof(lint);
	printf("size of a long long int: %lld bytes(s)\n", sizeof(llint));
	printf("size of a float: %f bytes(s)\n", sizeof(flo));
	return (0);
}
