#include "main.h"
/**
 * *_strpbrk - function thart searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string to match
 * Return: a pointer yo the byte in s that mathces one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
