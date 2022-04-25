#include "main.h"
/**
 * *_strcat - Fucntion that concateneat two strings
 * @dest: parameter pointer to a character
 * @src: parameter pointer to a character
 * Return: return value to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (; src[j] != '\0'; j++)
	{
		dest[i + 1] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
