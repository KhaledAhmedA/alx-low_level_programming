#include "main.c"
/**
 * print_last_digit - function returns last digit
 * @i: argument of function, @n: variable store remainder value
 * Return: Always 0 (Sucess)
*/
int print_last_digit(int i)
{
	int n = i % 10;

	if (n < 0)
	{
		_putchar (-n + 48);
		return (-n);
	}
	else
	{
		_putchar (n + 48);
		return (n);
	}
}
