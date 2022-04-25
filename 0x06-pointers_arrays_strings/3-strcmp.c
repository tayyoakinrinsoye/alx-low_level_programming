#include "main.h"
/**
 * _strcmp - function to compare 2 strings
 * @s1: param for string 1
 * @s2: param for string 2
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int flag;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		break;
	}
	flag = s1[i] - s2[i];
	return (flag);
}
