#include "main.h"
/**
 * jack_bauer - a function return time 24 hour
 * @hour: variable for carry hourse - @mins: variable carry minutes
 * Return: Always 0 (Sucess)
*/
void jack_bauer(void)
{
	int hour, mins;

	for (hour = 0; hour <= 23; hour++)
	{
		for (mins = 0; mins <= 59; mins++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(":");
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0'):
				_putchar('\n');
		}
	}
}
