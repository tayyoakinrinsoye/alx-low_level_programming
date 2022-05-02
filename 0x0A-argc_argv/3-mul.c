#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - program that multiplies 2 numbers
 * @argc: size of rgv*
 * @argv: array of strings
 * Return: product if success and error otherwise
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
