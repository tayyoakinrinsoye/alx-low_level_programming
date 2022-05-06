#include "main.h"
#include<stdlib.h>
/**
 * create_array - create array and intialize it with special character
 * @size: size of the array
 * @c: character to initialize it with
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(sizeof(char) * size);

	/*check if malloc was successful*/
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
