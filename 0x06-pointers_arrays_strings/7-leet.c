#include "main.h"
/**
 * leet - a function semulate encoding
 * @ch: given char
 * Return: encoded ptr
*/
char *leet(char *ch)
{
	char *ptr = ch;
	char chars[] = {'A', 'E', 'O', 'T', 'L'};
	int nums[] = {4, 3, 0, 7, 1};
	int i;

	while (*ch)
	{
		for (i = 0; i < sizeof(chars) / sizeof(char); i++)
		{
			if (*ch == chars[i] || *ch == chars[i] + 32)
				*ch = 48 + nums[i];

		}
		ch++;
	}
	return (ptr);
}
