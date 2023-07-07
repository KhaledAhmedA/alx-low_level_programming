#include "main.h"
/**
 * _puts - function print given string
 * @str: argument of function
 * Return: not return value
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
