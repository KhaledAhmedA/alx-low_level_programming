#include "main.h"
/**
 * rot13 - a function exchange pattern
 * @ch: function argument
 * Return: exchanged value
*/
char *rot13(char *ch)
{
	int i;
	char rot[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char val[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = ch;

	while (*ch)
	{
		for (i = 0, i <= 52; i++)
		{
			if (*ch == rot[i])
			{
				*ch = val[i];
				break;
			}
		}
		ch++;
	}
	return (p);
}
