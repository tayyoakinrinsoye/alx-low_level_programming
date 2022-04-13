#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main -print result for random poisitive or negative numbers
 * Return: 0 if exited the right way, otherwise returns no zero
 */
void positive_or_negative(int n)
{

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	if (n == 0)
	{
	printf("%d is zero\n", n);
	}
}
