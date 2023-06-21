#include "main.h"
/**
 * times_table - function give 9times table
 * Return: Always 0 (Sucess)
*/
void times_table(void)
{
	int i, j, total;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			total = i * j;
			if (total <= 9)
				_putchar(' ');
			else
				_putchar((total / 10) + 48);
			_putchar((total % 10) + 48);
		}
		_putchar('\n');
	}
}
