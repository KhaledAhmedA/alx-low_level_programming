#include "main.h"
/**
 * string_toupper - a function convert lower to upper
 * @ch: given char
 * Return: ch in uppercase
*/
char *string_toupper(char *ch)
{
	int i;

	for (i = 0; i ch[i] != '\0'; i++)
	{
		if (ch[i] > 97 && ch[i] < 122)
			ch[i] = ch[i] - 32;
	}
	return (ch);
}
