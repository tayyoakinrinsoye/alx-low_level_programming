#include "main.h"
/**
 * *_strncat - function that concatenete two strings
 * @dest: param for the destination string
 * @src: param for the source string
 * @n: integer parameter
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	for (j = 0; j < 2000; j++)
	{
		if (dest[j] == '\0')
		{
			break;
		}
		i++;
	}
	for (j = 0; j != '\0' && src[j] < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
return (dest);
}
