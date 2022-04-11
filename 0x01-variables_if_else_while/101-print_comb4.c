#include <stdio.h>
/**
 * main - main block
 * Description: program to print all possible different combination of
 * three digits. print only the smallest combination of 3 digits
 * Return: 0
 */
int main(void)
{
	int i, j, k;

		for (i = 0; i <= 9; i++)
		{
			for (j = 0; j <= 9; j++)
			{
				for (k = 0; k <= 9; k++)
				{
					if (k != j && j != i && i < j && j < k)
					{
						putchar(48 + i);
						putchar(48 + k);
						putchar(48 + j);
						if (i == 7 && j == 8 && k == 9)
						{
						break;
						}
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		putchar('\n');
		return (0);
}
