#include "main.h"
int if_prime(unsigned int num, unsigned int cons);

/**
 * is_prime_number - a function returns result if given num is a prime num
 * @n: given num
 * Return: 1 if prime, or 0 if not prime
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (if_prime(n, 2));
}

/**
 * if_prime - a function check given num if prime
 * @num: given num
 * @cons: constant iteration
 * Return: 1 if prime, or 0 if not prime
 */
int if_prime(unsigned int num, unsigned int cons)
{
	if (num / cons == 0)
	{
		if (num == cons)
			return (1);
		else
			return (0);
	}
	return (0 + if_prime(num, cons));
}
