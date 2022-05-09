#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function allocates memory using malloc
 * @b: size of the memory to be allocated
 * Return: pointer to the allocated memory r exit if alloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
