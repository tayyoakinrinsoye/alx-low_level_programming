#include "main.h"
/**
 * print_numbers - function prints numbers from 0 - 9
 * followed by new line
 * Return: void
 */
void print_numbers(void)
{
	char a = 48;

	while (a < 58)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
