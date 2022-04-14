#include <stdio.h>
/**
 * main - program to print numbers from 1 to 100 followed by new line
 * Description: print fizz for multiple of 3
 * and buzz for multiple of 5
 * print fizzbuzz for multiple fo 3 and 5
 * Return: 0
 */
int main(void)
{
	int i = 1;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
