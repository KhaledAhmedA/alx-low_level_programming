#include "main.h"
/**
 * puts2 - function give every another charachter
 * @str: function argument
 * Return: not return value
*/
void puts2(char *str)
{
	int counter;

	for (counter = 0; str[counter] != '\0'; counter++)
	{
		if (counter % 2 == 0)
			_putchar(str[counter]);
	}
	_putchar('\n');
}
