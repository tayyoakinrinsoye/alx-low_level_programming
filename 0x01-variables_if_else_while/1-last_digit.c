#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*including input output library */

/** betty style doc for function main goes there
 * main - program will assign a random number to variable
 * Return: zero if successful and non zero otherwise
 */
int main(void)
{
	int n;
	int last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_d = n % 10;

	if (last_d > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, last_d);
	else if (last_d == 0)
	printf("Last digit of %d is %d and is 0\n", n, last_d);
	else if (last_d < 6)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_d);

	return (0);
}
