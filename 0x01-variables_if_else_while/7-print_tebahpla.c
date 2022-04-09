#include <stdio.h>
/**
 *main - main block
 *Description: program that print lowercase alphebelt in reverse order
 *Return: 0
 */
int main(void)
{	
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
