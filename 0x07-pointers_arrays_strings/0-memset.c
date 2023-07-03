#include "main.h"
/**
 * _memset - a function return changed string according recieved bytes
 * @s: array of char
 * @b: char will replace
 * @n: num of bytes
 * Return: @s result after change by bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
		*(s + counter) = b;
	return (s);
}
