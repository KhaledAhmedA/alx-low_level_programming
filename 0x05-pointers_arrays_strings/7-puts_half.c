#include "main.h"
/**
 * puts_half - function half string and replace odds
 * @str: function argument
 * Return: not return value
*/
void puts_half(char *str)
{
	int counter;

	for (counter = 0; str[counter] != '\0'; counter++)
		;
	counter++;
	for (counter /= 2; str[counter] != '\0'; counter++)
		_putchar(str[counter]);
	_putchar('\n');
}
