#include "main.h"
/**
 * print_most_numbers - function print numbers except 2 and 4
 * @i: argument of function
 * Return: Always 0 (Sucess)
*/
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57)
	{
		if (i != 50 || i != 52)
			_putchar(i)
	}
	_putchar('\n');
}
