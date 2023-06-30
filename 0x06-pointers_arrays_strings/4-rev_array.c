#include "main.h"
/**
 * reverse_array - a function return reversed array
 * @a: given array
 * @n: size of array
 * Return: Always 0 (Sucess)
*/
void reverse_array(int *a, int n)
{
	int i, k, box;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		box = a[i];
		a[i] = a[j];
		a[j] = box;
	}
}
