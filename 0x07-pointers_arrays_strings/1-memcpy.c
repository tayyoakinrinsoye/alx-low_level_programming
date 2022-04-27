#include "main.h"
/**
 * *_memcpy - function copies n bytes from memory area src to dest
 * @dest: memory location to be copied to
 * @src: memory area to be copied from
 * @n: number of bytes to copy
 * Return: returns poointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
