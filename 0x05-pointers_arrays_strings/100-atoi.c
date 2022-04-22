#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string into an integer
 * @s: pointer to string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int index, index2;
	unsigned int result;
	int sign = 1;
	char get;

	index = 0;
	result = 0;
	while (*(s + index) != '\0')
	{
		get = *(s + index);
		if (get == '-')
		{
			sign *= -1;
		}
		if (get >= '0' && get <= '9')
		{
			index2 = index;
			while (*(s + index2) > 47 && *(s + index2) < 58)
			{
				result = (result * 10) + *(s + index2) - '0';
				index2++;
			}
			break;
		}
		index++;
	}
	if (sign < 0)
		result = result * sign;
	return (result);
}
