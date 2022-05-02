#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the min. nunber of coins to make change
 * @argc: number of command line arguments
 * @argv: array that contaings the arguments supplies while executing
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int cents, change = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		change += 1;
	}
	printf("%d\n", change);
	return (0);
}
