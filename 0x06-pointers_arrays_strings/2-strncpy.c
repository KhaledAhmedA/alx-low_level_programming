#include "main.h"
/**
 * _strncpy - a function that copy string
 * @dest: destnation
 * @src: source
 * @n: by bytes
 * Return: @dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int counter;

	for (counter = 0; counter < n && src[counter] != '\n'; counter++)
		dest[counter] = src[counter];
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
