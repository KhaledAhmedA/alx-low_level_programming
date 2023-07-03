#include "main.h"
/**
 * print_diagsums - a function sums diagonally from two daim array
 * @a: array
 * @size: array length
 * Return: not return value
*/
void print_diagsums(int *a, int size)
{
	int i, d1, d2;

	d1 = 0;
	d2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			d1 += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			d2 += a[i];
	}
	printf("%d, ", d1);
	printf("%d\n", d2);
}
