#ifndef DOG_H
#define DOG_H

/**
 * struct dog - is a struct type
 * @name: string or pointer to char
 * @age: float
 * @owner: pointer to char
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
