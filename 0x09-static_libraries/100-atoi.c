#include "main.h"
/**
 * _atoi - function convert string to integer
 * @s: function argument
 * Return: Always 0 (Sucess)
*/
int _atoi(char *s)
{
	unsigned int number;
	int signs;

	number = 0;
	signs = 1;

	do {
		if (*s == '-')
			signs *= -1;
		else if (*s >= '0' && *s <= '9')
			number = (number * 10) + (*s - '0');
		else if (number > 0)
			break;
	} while (*s++);
	return (number * signs);
}
