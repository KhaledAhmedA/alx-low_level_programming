#include "main.h"
/**
 * string_toupper - a function convert lower to upper
 * @str: argument given char
 * Return: ch in uppercase
*/
char *string_toupper(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (str[n] >= 97 && str[n] <= 122)
			str[n] = str[n] - 32;
	}
	return (str);
}
