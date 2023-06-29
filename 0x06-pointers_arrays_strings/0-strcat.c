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
	scount = 0;

	while (*(dest + dcount) != '\0')
		dcount++;
	while (scount >= 0)
	{
		*(dest + dcount) = *(src + scount)
			if (*(src + scount) == '\0')
				break;
		dcount++;
		scount++;
	}
	return (dest);
}
