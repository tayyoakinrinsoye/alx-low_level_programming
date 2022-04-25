#include "main.h"
/**
 * _strncpy - function copies content of source strg to dest strng
 * @dest: param to accept the copied string
 * @src: param to copy stng from
 * @n: number of string to copy
 * Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
