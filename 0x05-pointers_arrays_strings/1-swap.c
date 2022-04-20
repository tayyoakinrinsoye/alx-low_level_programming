#include "main.h"
/**
 * swap_int - Function to swap the values of 2 integers
 * @a: first ineger
 * @b: second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
