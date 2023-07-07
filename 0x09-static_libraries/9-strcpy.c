#include "main.h"
/**
 * _strcpy - copy the string of src
 * @dest: destination.
 * @src: source.
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	while (counter >= 0)
	{
		*(dest + counter) = *(src + counter);
		if (*(src + counter) == '\0')
			break;
		counter++;
	}
	return (dest);
}
