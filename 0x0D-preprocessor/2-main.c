#include <stdio.h>
/**
 * main - print the name of file program was compiled from
 * using predefined macro
 * Return: file name
 */
int main(void)
{
	printf("%s\n"__FILE__);
	return (0);
}
