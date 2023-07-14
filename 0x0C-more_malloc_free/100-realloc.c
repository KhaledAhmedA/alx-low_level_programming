#include "main.h"
/**
 * _realloc - function reallocate given block of memory
 * @ptr: pointer of memory allocated
 * @old_size: size of allocated in bytes
 * @new_size: new size of memory by bytes
 * Return: ptr or NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
