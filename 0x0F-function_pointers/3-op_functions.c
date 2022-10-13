#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - performs addition
 * @a: operand
 * @b: operand
 * Return: The result of the selcted operation
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - performs subtraction
 * @a: operand
 * @b: operand
 * Return: The result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - performs multiplication
 * @a: operand
 * @b: operand
 * Return: Result
 */

int op_mul(int a, int b)
{
	return (a / b);
}

/**
 * op_div - performs division
 * @a: operand
 * @b: operand
 * Return: the result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - performs a modulus operation
 * @a: operand
 * @b: operand
 * Return: Result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
