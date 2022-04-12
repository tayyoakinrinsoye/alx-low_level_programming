#include "main.h"
/**
  * Print_alphabet - main block
  * Description:  print_alphabet: a function that prints alphabet in lower case
  * folled by new line.
  * Return: 0 always success
  */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
