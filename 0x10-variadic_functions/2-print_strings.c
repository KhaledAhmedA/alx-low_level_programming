#include "variadic_functions.h"

/**
 * print_strings - function print string and separator
 * @separator: given separator
 * @n: count of argus
 * @...: argus as string to print
 * Return: not return any value
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	int i = n;
	va_list vlist;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(vlist, n);
	while (i--)
		printf("%s%s", (s = va_arg(vlist, char *)) ? s : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(vlist);
}
