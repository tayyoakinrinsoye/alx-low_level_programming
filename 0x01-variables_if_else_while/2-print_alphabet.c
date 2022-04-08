#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints the alphabet in lower case
 * Return: 0
 */
int main(void)
{
	char k = 'a';

	while (k <= 'z')
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);
}
