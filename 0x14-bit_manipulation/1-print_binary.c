#include "main.h"

/**
 * print_binary - function convert number to binary value and print it
 * @n: given number
 * Return: not return any value
*/
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8;
	int prnt = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			prnt++;
		}
		else if (prnt)
			_putchar('0');
	}

	if (!prnt)
		_putchar('0');
}
