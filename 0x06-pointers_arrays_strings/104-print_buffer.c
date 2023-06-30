#include "main.h"
/**
 * ifascii - a function checking if printable as ascii
 * @n: arument
 * Return: 1 if true, 0 if false
*/
int ifascii(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * hexa - a function that print hex value of given string
 * @b: string
 * @f: start pos
 * @l: last pos
*/
void hexa(char *b, int f, int l)
{
	int i = 0;

	while (i < 10)
	{
		if (i < l)
			printf("%02x", *(b + f + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * giveascii - a function print ascii value of a string
 * @b: string
 * @f: starting pos
 * @l: last pos
*/
void giveascii(char *b, int f, int l)
{
	int ch, i;

	i = 0;
	while (i < l)
	{
		ch = *(b + i + f);
		if (!ifascii(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - a function print a buffer given
 * @b: given string
 * @size: buffer size
*/
void print_buffer(char *b, int size)
{
	int f, l;

	if (size > 0)
	{
		for (f = 0; f < size; f += 10)
		{
			l = (size - f < 10) ? size - f : 10;
			printf("%08x: ", f);
			hexa(b, f, l);
			giveascii(b, f, l);
			printf("\n");
		}
	}
	else
		printf("\n");
}

