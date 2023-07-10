#include "main.h"

/**
 * str_concat - function return concatanation of two given strings
 * @s1: first string
 * @s2: second string
 * Return: Array of chars of two given strings or null
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int il, jl, ck, jcount;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* length of s1 and s2 */
	for (il = 0; s1[il] != '\0'; il++)
		;
	for (jl = 0; s2[jl] != '\0'; jl++)
		;

	str = (char *)malloc(sizeof(char) * (il + jl + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	jcount = jl;
	for (ck = 0; ck < il; ck++)
		str[ck] = s1[ck];
	for (jl = 0; jl <= jcount; jl++, ck++)
		str[ck] = s2[jl];

	return (str);
}
