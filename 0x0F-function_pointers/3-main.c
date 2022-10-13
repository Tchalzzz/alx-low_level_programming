#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: The number of arguments suplied
 * @argv: Array of pointers to the argument
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int num1, num2, result;
	int (*res)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	res = get_op_func(argv[2]);
	if (res == 0)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = res(num1, num2);
	printf("%d\n", result);
	return (0);
}
