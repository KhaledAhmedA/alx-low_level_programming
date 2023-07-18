#include "dog.h"

char *_strcpy(char *dest, char *src);
int _strlen(const char *s);

/**
 * new_dog - function creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog struct of NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_c;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog_c = (dog_t *) malloc(sizeof(dog_t));

	if (dog_c == NULL)
		return (NULL);

	dog_c->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if ((*dog_c).name == NULL)
	{
		free(dog_c);
		return (NULL);
	}

	dog_c->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if ((*dog_c).owner == NULL)
	{
		free(dog_c->name);
		free(dog_c);
		return (NULL);
	}

	dog_c->name = _strcpy(dog_c->name, name);
	dog_c->age = age;
	dog_c->owner = _strcpy(dog_c->owner, owner);

	return (dog_c);
}

/**
 * _strlen - function calc string length
 * @s: given string
 * Return: num of length
*/

int _strlen(const char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - function copry string
 * @dest: destnation string
 * @src: source of string
 * Return: arr of chars
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
