#include "main.h"
/**
 * reverse_array - a function return reversed array
 * @a: given array
 * @n: size of array
 * Return: not return value
*/
void reverse_array(int *a, int n)
{
	int i, k, box;

	for (i = 0, k = (n - 1); i < k; i++, k--)
	{
		box = a[i];
		a[i] = a[k];
		a[k] = box;
	}
}
