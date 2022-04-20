#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to the string
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0, last = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	last = len - 1;

	while (last >= 0)
	{
		_putchar(s[last]);
		last--;
	}
	_putchar('\n');
}
