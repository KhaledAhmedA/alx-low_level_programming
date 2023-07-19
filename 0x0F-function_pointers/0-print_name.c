#include "function_pointers.h"

/**
 * print_name - function return function pointer with argument
 * @name: argument of function pointer
 * @f: function pointer
 * Return: not return any value void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
