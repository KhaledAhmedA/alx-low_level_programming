#include <unistd.h>
#include "main.h"
/**
 * _putchar - function to print to std output
 * @str: the parameter of function carry variable to operations
 * Return: Always 0 (Sucess)
*/
int _putchar(char str)
{
	return (write(1, &str, 1)"\n");
}
