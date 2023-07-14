#include "main.h"
/**
 * _calloc - function make memory allocation for nmemb array
 * @nmemb: given array
 * @size: bytes
 * Return: pointer to allocated memory or NULL for 0 or fail
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
