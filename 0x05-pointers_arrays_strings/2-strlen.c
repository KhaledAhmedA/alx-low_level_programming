#include "main.h"
/**
 * _strlen - function count given string
 * @s: function argument
 * Return: number of given string
*/
int _strlen(char *s)
{
	int counter;

	while (*(s + counter) != '\0')
		counter++;

	return (counter);
}
