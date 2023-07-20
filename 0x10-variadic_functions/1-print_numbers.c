#include "variadic_functions.h"

/**
 * print_numbers - function print numbers
 * @separator: given separator
 * @n: nums passed to function
 * @...: integers to print
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	int i;

	va_start(vlist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vlist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vlist);
}
