#include "main.h"
/**
 * print_most_numbers - prints number from 0 to 9
 * Leaves out number 2 and 4
 * Return: returns void
 */
void print_most_numbers(void)
{
	char c = 48;

	for (c = 48; c < 58; c++)
	{
	
		if ((c == 50) || (c == 52))
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
