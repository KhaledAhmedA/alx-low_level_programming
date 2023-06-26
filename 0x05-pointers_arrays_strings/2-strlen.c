#include "main.h"
/**
 * _strlen - function count given string
 * Return: Always 0 (Sucess)
*/
int _strlen(char *s)
{
	int counter;

	while (*(s + counter) != '\0')
		counter++;

	return (counter);
}
