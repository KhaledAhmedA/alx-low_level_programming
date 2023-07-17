#ifndef DOG_H
#define DOG_H

#include <stdio.h>

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
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
