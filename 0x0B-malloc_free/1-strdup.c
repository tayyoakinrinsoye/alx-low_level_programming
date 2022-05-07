#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a new string
 * which is a duplicate of string str
 * @str: string to be duplicated
 * Return: NULL if str is NULL
 * pointer to duplicated string if successful
 * NULL if memory was insufficient
 */
char *_strdup(char *str)
{
	char *newstr;
	unsigned int len, i;

	/* check if str is null*/
	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	newstr = malloc(sizeof(char) * (len + 1));

	/* check if malloc was successful*/
	if (newstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		newstr[i] = str[i];
	}
	newstr[len] = '\0';
	return (newstr);
}
