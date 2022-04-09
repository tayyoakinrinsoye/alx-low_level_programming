#include <stdio.h>
/**
 * main - main block
 * Description: program to print all singe digit numbers of base 10
 * without using the char data type
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c< 10)
	{	putchar(48 + c);
		c++;
	}
	putchar('\n');
	return (0);
}
