#include "main.h"
/**
 * rev_string - function exchange reversed string
 * @s: function argument
 * Return: not return value
*/
void rev_string(char *s)
{
	int i, j;
	char box;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (j = 0; j < (i / 2); j++)
	{
		box = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = temp;
	}
}
