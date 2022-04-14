#include "main.h"
/**
 * _isdigit - function to check for a digit from 0 to 9
 * @c: the number to check
 * Return: 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
