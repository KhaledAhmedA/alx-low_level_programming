#include "main.h"
/**
 * _strncat - function concatnate strings
 * @dest: destnation
 * @src: source
 * @n: bytes
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int dcount, scount;

	dcount = 0;

	while (dest[dcount])
		dcount++;
	for (scount = 0; src[scount] < n && src[scount] != '\0'; scount++)
		dest[dcount + scount] = src[scount];
	dest[dcount + scount] = '\0';

	return (dest);
}
