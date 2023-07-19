#include "function_pointers.h"

/**
 * int_index - function search of int
 * @array: arr of int as input
 * @size: arr size
 * @cmp: pointer of function of compare values
 * Return: the element or 0 if no matches or empty arr return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array && cmp && size)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
