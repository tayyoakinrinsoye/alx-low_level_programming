#include "main.h"
/**
 * *cap_string - function to capitalize all words of a string
 * @str: pointer to the string
 * Return: str
 */
char *cap_string(char *str)
{
	int i, j;
	char delimeters[] = " \t\n,;.!/\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] -= 32;
				for (j = 0; delimeters[j] != '\0'; j++)
					if (str[i] == delimeters[j] && str[i + 1] >= 97 && str[i + 1] <= 122)
						str[i + 1] -= 32;
	}
	return (str);
}
