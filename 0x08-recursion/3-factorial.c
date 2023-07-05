#include "main.h"
/**
 * factorial - a function return fact of num
 * @n: given num
 * Return: if less than zero return -1, else return factorial
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
