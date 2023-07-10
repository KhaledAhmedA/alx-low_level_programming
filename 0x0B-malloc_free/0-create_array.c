#include "main.h"
/**
 * create_array  -function return array of chars
 * @size: size of arr
 * @c: chars in array
 * Return: 0 if no memory avail, or array of pointer to chars
*/
char *create_array(unsigned int size, char c)
{
	char *mal = malloc((size * sizeof(c));

	if (size == 0 || mal == NULL)
		return (NULL);

	while (size--)
		mal[size] = c;

	return (mal);
}
