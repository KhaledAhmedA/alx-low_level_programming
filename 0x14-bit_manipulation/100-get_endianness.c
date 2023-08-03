#include "main.h"

/**
 * get_endianness - function return endianness of system
 * Return: 0 if big endianness, 1 if small
*/
int get_endianness(void)
{
	unsigned long int i = 1;

	return (*(char *)&i);
}
