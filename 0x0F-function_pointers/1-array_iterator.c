#include "function_pointers.h"

/**
 * array_iterator - map array by function pointer
 * @array: array
 * @size: size of array
 * @action: function pointer for operation
 * Return: void not return value
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last = array + size - 1;

	if (array && size && action)
		while (array <= last)
			action(*array++):
}
