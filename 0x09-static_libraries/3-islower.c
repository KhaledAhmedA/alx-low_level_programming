#include "main.h"
/**
 * _islower - function check if letter is lowercase
 * @alpha: argument passing to function to check
 * Return: 0 (if lower) or 1 (if otherwise)
*/
int _islower(int alpha)
{
	if (alpha <= 122 && alpha >= 97)
		return (1);
	else
		return (0);
	_putchar('\n');
}
