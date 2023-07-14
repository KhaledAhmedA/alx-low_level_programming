#include "main.h"
/**
 * array_range - function make arr of int
 * @max: max value
 * @min: min value
 * Return: created array or NULL
*/
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
