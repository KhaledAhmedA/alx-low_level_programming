#include "variadic_functions.h"

void format_char(char *separator, va_list vlist);
void format_int(char *separator, va_list vlist);
void format_float(char *separator, va_list vlist);
void format_string(char *separator, va_list vlist);

/**
 * print_all - function print any passed argus
 * @format: the format of argus to string
*/
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list vlist;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(vlist, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, vlist);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(vlist);
}

/**
 * format_char - function for string format
 * @separator: separator
 * @vlist: argus pointer
*/
void format_char(char *separator, va_list vlist)
{
	printf("%s%c", separator, va_arg(vlist, int));
}

/**
 * format_int - function for int format
 * @separator: separator
 * @vlist: argus pointer
*/
void format_int(char *separator, va_list vlist)
{
	printf("%s%d", separator, va_arg(vlist, int));
}

/**
 * format_float - function for float format
 * @separator: separator
 * @vlist: argus pointer
*/
void format_float(char *separator, va_list vlist)
{
	printf("%s%f", separator, va_arg(vlist, double));
}

/**
 * format_string - function for string format
 * @separator: separator
 * @vlist: argus pointer
*/
void format_string(char *separator, va_list vlist)
{
	char *s = va_arg(vlist, char *);

	switch ((int)(!s))
		case 1:
			s = "(nil)";

	printf("%s%s", separator, s);
}
