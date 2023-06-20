#include "main.h"
/**
 * _isalpha - to check if char is an alphabet
 * @c: ia an argument passing to the _isalpha function
 * Return: 1 (whatever alphabet lower or upper) or 0 (otherwise)
*/
int _isalpha(int c)
{
	if (c <= 122 && c >= 97 || c <= 90 && c >= 65)
		return (1);
	else
		return (0);
	_putchar('\n');
}
