#include "main.h"
/**
 * print_diagonal - function print diagonally
 * @n: function parameter
 * Return: Always 0 (Sucess)
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
