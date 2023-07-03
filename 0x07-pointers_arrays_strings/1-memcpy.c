#include "main.h"
/**
 * _memcpy - a function to copy from src ti dest
 * @dest: where to copy in
 * @src: where to copy from
 * @n: nums of bytes
 * Return: destnation
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
		*(dest + i) = *(src + i);
	return (dest);
}
