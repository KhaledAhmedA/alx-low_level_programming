#include "variadic_functions.h"

/**
 * sum_them_all - function sum arguments
 * @n: num of arguments
 * @...: input nums arguments to sum
 * Return: sum of arguments or 0
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list ptr;

	if (!n)
		return (0);

	va_start(ptr, n);
	while (i--)
		sum += va_arg(ptr, int);

	va_end(ptr);
	return (sum);
}
