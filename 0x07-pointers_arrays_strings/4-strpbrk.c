#include "main.h"
/**
 * _strpbrk - a function return eqalality of given string
 * @s: string
 * @accept: string
 * Return: chars that matches or null
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s[i]);
		}
	return ('\0');
}
