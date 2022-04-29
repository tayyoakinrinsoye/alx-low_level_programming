#include "main.h"
/**
 * _sqrt - function that returns the square root of a number
 * @n: number to find the square root
 * @i: iterator
 * Return: square root of a nummber
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the square root of number
 * @n: number to fuind the square root
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
