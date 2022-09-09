#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main  - Entry point
*
* Return: Returns 0(Successful)
*
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*checks the boolean condition */
	if (n > 0)
	/* prints the number as positive if true */
	{
		printf("%d is positive\n", n);
	}
	/* prints the number as zero if true */
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	/* prints the number as negative if the other checks fail */
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}

