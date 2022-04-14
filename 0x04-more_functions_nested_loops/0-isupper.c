#include "main.h"
/**
 * _isupper - Program that checks for uppercase character
 *  and returns 1 if c is uppercase and zero otherwise
 * @c: character to be tested
 * Return: 1 fi c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
