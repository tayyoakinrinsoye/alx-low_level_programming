#include "main.h"
/**
 * _pow_recursion - function that returns value of x raise to power of y
 * @x: value to calculate
 * @y: power to be raised to
 * Return: value of x to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
