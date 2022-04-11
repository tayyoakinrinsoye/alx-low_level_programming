#include <stdio.h>
/**
 *  main -main block
 *  Description: program prints all possible combinations of single digits
 *  from zero to nine separated by comma and followed by a space
 *  Return: 0
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
		if (i != 9)
		{	
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
