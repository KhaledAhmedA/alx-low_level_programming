#include "variadic_functions.h"

/**
 * print_numbers - function print numbers
 * @separator: given separator
 * @n: nums passed to function
 * @...: integers to print
 * Return: not return any value
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	int i;

	i = n;
	if(!n)
	{
		printf("\n");
		return;
	}
	va_start(vlist, n);
	while (i--)
	{
		printf("%d%s", va_arg(vlist, int),
				i ? (separator ? separator : "") : "\n");
	}

	va_end(vlist);
}
