#include "main.h"
/**
 * print_times_table - function print table of given number
 * @n: argument passing to function
 * Return: Always 0 (Sucess)
*/
void print_times_table(int n)
{
	int num1, num2, total;

	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar(48);
			for (num2 = 1; num2 <= n; ++num2)
			{
				_putchar(',');
				_putchar(' ');
				total = num1 * num2;
				if (total <= 9)
					_putchar(' ');
				if (total <= 99)
					_putchar(' ');
				if (total >= 100)
				{
					_putchar((total / 100) + '0');
					_putchar((total / 10) % 10 + '0');
				}
				else if (total <= 99 && total >= 10)
					_putchar((total / 10) + '0');
				_putchar((total % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
