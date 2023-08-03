#include "main.h"

/**
 * clear_bit - function clear bit at index
 * @n: index
 * @index: index of bit to clear
 * Return: 1 Sucess, -1 if not
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;

	return (1);
}
