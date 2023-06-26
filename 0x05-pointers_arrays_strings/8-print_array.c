#include "main.h"
/**
 * print_array - function that print array separated by comma
 * @a: function argument
 * @n: function argument
 * Return: not return value
*/
void print_array(int *a, int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		if (counter != (n - 1))
			printf("%d, ", a[counter]);
		else
			printf("%d", a[counter]);
	}
	printf("\n");
}
