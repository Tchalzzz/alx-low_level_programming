#include "main.h"

/**
 * factorial - Returns the favtorial of an integer
 * @n: The number whose favtorial will be generated
 * Return: -1 if the number is less than 0, 1 if the number is 0
 * the factorial of the number n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
