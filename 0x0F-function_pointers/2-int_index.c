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

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (1);
	}
	return (-1);
}
