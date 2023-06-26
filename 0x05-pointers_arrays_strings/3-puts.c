#include "main.h"
/**
 * _puts - function print given string
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
