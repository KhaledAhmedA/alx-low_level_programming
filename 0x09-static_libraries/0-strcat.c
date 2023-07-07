#include "main.h"
/**
 * _strcat - function recieve pointer of arr of char and concat
 * @src: argument source
 * @dest: argument destnation
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int dcount, scount;

	dcount = 0;

	while (dest[dcount])
		dcount++;
	for (scount = 0; src[scount]; scount++)
		dest[dcount++] = src[scount];
	return (dest);
}
