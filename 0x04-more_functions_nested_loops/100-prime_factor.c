#include "stdio.h"
/**
 * main - largest prime factror of 612852475143
 *
 * Return: 0
 *
 */
int main (void)
{
	long int x, y, prime;

	prime = -1;
	x = 612852475143;

	while (x % 2 == 0)
	{
		prime = 2;
		x = x / 2;
	}
	for (y = 3; y <= x / 2; y = y + 2)
	{
		while (x % y == 0)
		{
			prime = y;
			x = x / y;
		}
	}
	if (x > 2)
		prime = x;
	printf("%ld\n", prime);
	return (0);
}

