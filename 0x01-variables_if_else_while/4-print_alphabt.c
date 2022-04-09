#include <stdio.h>
/**
 * main -main block
 * Description: prints alphabets in lowercase and
 * exclude letters 'q' and 'e'
 * Return: 0
 */
int main(void)
{
	char f ='a';

	while (f <= 'z')
	{
		if ( f != 'e' && f != 'q')
		{
			putchar(f);
		}
		f++;
	}
	putchar('\n');
	return (0);
}
