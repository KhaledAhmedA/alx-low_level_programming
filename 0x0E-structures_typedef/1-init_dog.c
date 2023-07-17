#include "dog.h"

/**
 * init_dog - function init dog struct type variables
 * @d: struct type
 * @name: name in the struct
 * @age: var of struct
 * @owner: char var in struct
 * Return: not return any value
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
