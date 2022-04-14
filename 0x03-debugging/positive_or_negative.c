#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main -print result for random poisitive or negative numbers
 *
 * Return: 0 if exited the right way, otherwise returns no zero
 *
 */
void positive_or_negative(int i)
{

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (i > 0)
	{
	printf("%d is positive\n", i);
	}
	if (i < 0)
	{
	printf("%d is negative\n", i);
	}
	if (i == 0)
	{
	printf("%d is zero\n", i);
	}
}
