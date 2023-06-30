#include "main.h"
/**
 * rot13 - a function exchange pattern
 * @s: function argument
 * Return: exchanged value
*/
char *rot13(char *s)
{
	int i;
	char rot[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char val[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = s;

	while (*s)
	{
		for (i = 0, i <= 52; i++)
		{
			if (*s == rot[i])
			{
				*s = val[i];
				break;
			}
		}
		s++;
	}
	return (p);
}
