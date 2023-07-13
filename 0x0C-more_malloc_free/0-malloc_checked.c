#include "main.h"
/**
 * malloc_checked - function make dynamic allocation for b byets
 * @b: num of bytes
 * Return: pointer to memory allocation or exit with 98 status
*/
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
