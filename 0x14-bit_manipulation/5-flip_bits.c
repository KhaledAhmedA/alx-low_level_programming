#include "main.h"

/**
 * flip_bits - returns number bits need to flip to get one number to another
 * @n: first num
 * @m: seconed num
 * Return: num of bits to flip to convert nums
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int Xor = n ^ m;
	unsigned int counter = 0;

	while (Xor)
	{
		if (Xor & 1ul)
			counter++;
		Xor = Xor >> 1;
	}

	return (counter);
}
