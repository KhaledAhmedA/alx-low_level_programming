#include "main.h"
/**
 * _strdup - function return given string as a copy
 * @str: given string
 * Return: NULL in case of null or string
*/

char *_strdup(char *str)
{
	char *cpstr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	cpstr = (char *)malloc((i + 1) * sizeof(char));

	if (cpstr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		cpstr[j] = str[j];

	return (cpstr);
}
