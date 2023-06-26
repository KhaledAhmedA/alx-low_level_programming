#include "main.h"
/**
 * _strlen - function count given string
 * @s: function argument
 * Return: number of given string
*/
int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*(s + counter) != '\0')
		counter++;

	return (counter);
}
