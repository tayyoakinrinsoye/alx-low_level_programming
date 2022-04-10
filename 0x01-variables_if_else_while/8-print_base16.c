#include <stdio.h>
/**
 * main - main function of the program
 * Description: program prints all the numbers of base 16 in lower case
 * Return: return 0 if success
 **/
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
