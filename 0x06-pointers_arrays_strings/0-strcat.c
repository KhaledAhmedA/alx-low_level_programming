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
	for (scount; scount >= 0; dcount++)
	{
		*(dest + dcount) = *(src + scount)
			if (*(src + scount) == '\0')
				break;
		scount++;
	}
	return (dest);
}
