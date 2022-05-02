#include "main.h"
#include <stdio.h>
/**
 * main - program that prints all argument it receives
 * @argc: size of *argv
 * @argv: array of strings
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
