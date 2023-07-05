#include "main.h"
/**
 * _puts_recursion - a function print string
 * @s: given arr of chars
 * Return: not return value
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
