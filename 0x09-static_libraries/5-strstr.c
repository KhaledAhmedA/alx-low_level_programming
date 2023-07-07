#include "main.h"
/**
 * _strstr - a function find first matching in string
 * @haystack: string
 * @needle: substring
 * Return: first location or null
*/
char *_strstr(char *haystack, char *needle)
{
	    char *ptrs;
	char *ptrn;

	while (*haystack != '\0')
	{
		ptrs = haystack;
		ptrn = needle;

		while (*haystack != '\0' && *ptrn != '\0' && *haystack == *ptrn)
		{
			haystack++;
			ptrn++;
		}
		if (!*ptrn)
			return (ptrs);
		haystack = ptrs + 1;
	}
	return (0);
}
