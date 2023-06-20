#include "main.h"
/**
 * jack_bauer - a function return time 24 hour
 * Return: Always 0 (Sucess)
*/
void jack_bauer(void)
{
	int min, hu;

	for (hu = 0; hu <= 23; hu++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hu / 10) + '0');
			_putchar((hu % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
				_putchar('\n');
		}
	}
}
