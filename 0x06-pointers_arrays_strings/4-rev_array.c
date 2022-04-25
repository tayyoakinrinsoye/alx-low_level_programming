#include "main.h"
/**
 * reverse_array - function to reverse array
 * @a: pointer to the array to be reversed
 * @n: size of array to be reversed
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int res = 0;

	for (i = 0; i < (n / 2); i++)
	{
		res = a[i];
		a[i] = a[(n - 1 - i)];
		a[(n - 1 - i)] = res;
	}
}
