#include "main.h"
/**
 * _strspn - a function return location of first equality char
 * @s: first string
 * @accept: second string to found first result
 * Return: @i location of first equality
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigend int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	return (i);
}
