#include <stdio.h>
/**
 * main - main block
 * Description - program to print combination of 2 digits in assending order
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (i != j && i <= j)
			{
				putchar(48 + i);
				putchar(48 + j);
				if (i == 8 && j == 9)
				{
					break;
				}
					putchar(',');
					putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
