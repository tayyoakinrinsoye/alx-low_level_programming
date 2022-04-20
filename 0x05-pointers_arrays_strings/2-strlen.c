#include "main.h"
/**
 * _strlen - function returns the length of a string
 * @s:the string to be passed
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s[i] != '\0')
	{
		i++;
		s++;
	}
	return (i);

}
