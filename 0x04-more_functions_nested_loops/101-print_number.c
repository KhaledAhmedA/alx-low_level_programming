#include "main.h"
/**
 * print_number - function print number instead char
 * @n: function argument
 * Return: Always 0 (Sucess)
*/
void print_number(int n)
{
	unsigned int i, j, incr;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}

	j = i;
	incr = 1;

	while (j > 9)
	{
		j /= 10;
		incr *= 10;
	}

	for (; incr >= 1; incr /= 10)
	{
		_putchar(((i / incr) % 10) + 48);
	}
}
