#include "main.h"

void _puts(char *s);
void _print_int(unsigned long int n);
int _atoi(const char *str);

/**
 * main - Entry point multiplication args
 * @argc: length of agruments
 * @argv: array of values
 * Return: Always 0 (Sucess)
*/
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}

	_print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}

/**
 * _puts - function print string followed new line
 * @s: pointer of string (arr of chars)
 * Return: not return any value
*/
void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
}

/**
 * _atoi - function convert string to int
 * @str: array of chars
 * Return: int from converted string
*/
int _atoi(const char *str)
{
	int positive = 1;
	unsigned long int i, res = 0, fnum;

	for (fnum = 0; !(str[fnum] >= 48 && str[fnum] <= 57); fnum++)
	{
		if (str[fnum] == '-')
		{
			positive *= -1;
		}
	}

	for (i = fnum; str[i] >= 48 && str[i] <= 57; i++)
	{
		res *= 10;
		res += (str[i] - 48);
	}

	return (positive * res);
}

/**
 * _print_int - function print int
 * @n: given int
 * Return: not return any value
*/
void _print_int(unsigned long int n)
{
	unsigned long int division = 1, i, res;

	for (i = 0; n / division > 9; i++, division *= 10)
		;
	for (; division >= 1; n %= division, division /= 10)
	{
		res = n / division;
		_putchar('0' + res);
	}
}
