#include "main.h"
/**
 * string_nconcat - function concate two strings
 * @s1: first string
 * @s2: second string
 * @n: num of bytes
 * Return: concatenated strings arr of chars or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, lens1, lens2, lenptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (lens1 = 0; s1[lens1] != '\0'; lens1++)
		;
	for (lens2 = 0; s2[lens2] != '\0'; lens2++)
		;

	if (n > lens2)
		n = lens2;

	lenptr = lens1 + n;
	ptr = malloc(lenptr + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < lenptr; i++)
		if (i < lens1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - lens1];
	ptr[i] = '\0';
	return (ptr);
}
