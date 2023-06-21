#include "main.h"
/**
 * print_to_98 - function print to 98
 * @n: function argument
 * Return: Always 0 (Sucess)
*/
void print_to_98(int n)
{
	int dist;

	if (n < 98)
		for (dist = n; dist < 98; dist++)
			printf("%d, ", dist);
	else
		for (dist = n; dist > 98; dist--)
			printf("%d, ", dist);
	printf("98\n");
}
