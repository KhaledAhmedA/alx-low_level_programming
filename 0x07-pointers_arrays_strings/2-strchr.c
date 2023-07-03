#include "main.h"
/**
 * _strchr - a function return location of char
 * @s: given string
 * @c: target char
 * Return: first location of c
*/
char *_strchr(char *s, char c)
{
	unsigned int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
		if (s[counter] == c)
			return (s[counter]);
	if (s[counter] == c)
		return (s[counter]);

	return ('\0');
}
