#include "dog.h"
/**
 * free_dog - function free memory from dog struct
 * @d: struct
 * Return: not return any value
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
