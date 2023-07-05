#include "main.h"
/**
 * _print_rev_recursion - a function print reversed string
 * @s: arr of char
 * Return: not return value
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
