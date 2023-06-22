#include "main.h"
/**
 * print_line - print given lines
 * @n: function argument
 * Return: Always 0 (Sucess)
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		_putchar(95);
	_putchar('\n');
}
