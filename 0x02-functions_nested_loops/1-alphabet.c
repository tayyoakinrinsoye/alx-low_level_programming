#include "main.h"
/**
  * Print_alphabet - a function that prints alphabet in lower case
  */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
