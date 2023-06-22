#include "main.h"
/**
 * print_square - function print square by # char
 * @size: function argument
 * Return: Always 0 (Sucess)
*/
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar(35);
		if (i != size -1)
			putchar('\n');
	}
	_putchar('\n');
}
