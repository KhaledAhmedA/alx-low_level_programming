#include "main.h"
/**
 * _strcmp - a function compare two string
 * @s1: char of str argument
 * @s2: char of str argument
 * Return: differ
*/
int _strcmp(char *s1, char *s2)
{
	int differ = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			differ = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (differ);
}
