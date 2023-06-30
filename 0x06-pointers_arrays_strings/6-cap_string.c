#include "main.h"
/**
 * cap_string - a function capitalize every word
 * @str: argument
 * Return: @str
*/
char *cap_string(char *str)
{
	int c, i;
	int sep_char[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	c = 0;
	if (*(str + c) >= 97 && *(str + c) <= 122)
		*(str + c) = *(str + c) - 32;
	c++;
	while (*(str + c) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(str + c) == sep_char[i])
			{
				if ((*(str + (c + 1)) >= 97) && (*(str + (c + 1)) <= 122))
					*(str + (c + 1)) = *(str + (c + 1)) - 32;
				break;
			}
		}
		c++;
	}
	return (str);
