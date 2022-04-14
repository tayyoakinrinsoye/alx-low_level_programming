#include "main.h"
/**
 * print_diagonal - function that draws a daigonal line on the terminal
 *
 * @n: number of times the line will be drawn
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (space = 0; space < i; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
