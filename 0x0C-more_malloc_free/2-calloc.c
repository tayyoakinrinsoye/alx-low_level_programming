#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function allocates memory for an array
 * @nmemb: elements in the array
 * @size: size of memory to be allocated
 * Return: NULL if nmemeb or size is 0, NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*(p + i) = 0;

	return (p);
}
