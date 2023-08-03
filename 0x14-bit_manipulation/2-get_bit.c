#include "main.h"

/**
 * get_bit - function gets bit in specific index
 * @n: given num
 * @index: bit to get
 * Return: bit state, ot -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
