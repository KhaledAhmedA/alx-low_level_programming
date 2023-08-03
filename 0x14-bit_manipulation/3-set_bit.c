#include "main.h"

/**
 * set_bit - function set bit at given index
 * @n: index
 * @index: bit to set
 * Return: 1 Sucess, -1 failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
