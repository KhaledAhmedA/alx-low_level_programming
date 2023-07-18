#include "dog.h"

/**
 * new_dog - function creates new dog from struct type
 * @name: name
 * @age: age
 * @owner: owner
 * Return: struct of new dog or NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_c;
	int i, namelen, ownerlen;

	dog_c = malloc(sizeof(*dog_c));
	if (dog_c == NULL || !(name) || !(owner))
	{
		free(dog_c);
		return (NULL);
	}

	for (namelen; name[namelen]; namelen++)
		;
	for (ownerlen; owner[ownerlen]; ownerlen++)
		;

	dog_c->name = malloc(namelen + 1);
	dog_c->owner = malloc(ownerlen + 1);

	if (!(dog_c->name) || !(dog_c->owner))
	{
		free(dog_c->owner);
		free(dog_c->name);
		free(dog_c);
		return (NULL);
	}

	for (i = 0; i < namelen; i++)
		dog_c->name[i] = name[i];

	dog_c->name[i] = '\0';
	dog_c->age = age;

	for (i = 0; i < ownerlen; i++)
		dog_c->owner[i] = owner[i];
	dog_c->owner[i] = '\0';

	return (dog_c);
}
