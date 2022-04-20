#include "main.h"
/**
 * _puts - Function that prints a strinc followed by newline
 * * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}
