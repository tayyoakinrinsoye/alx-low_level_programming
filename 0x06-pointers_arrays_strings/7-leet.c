#include "main.h"
/**
 * leet - encodes a string into 1337
 * @ch: string
 * Return: string that is encoded
 */
char *leet(char *ch)
{
	char *c = ch;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int val[] = {4, 3, 0, 7, 1};
	unsigned int j;

	while (*ch)
	{
		for (j = 0; j < sizeof(key) / sizeof(char); j++)
		{
			if (*ch == key[j] || *ch == key[j] + 32)
			{
				*ch = 48 + val[j];
			}
		}
		ch++;
	}
	return (c);
}
