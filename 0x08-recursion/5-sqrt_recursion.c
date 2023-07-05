#include "main.h"
int check_pow(int n, int cons);

/**
 * _sqrt_recursion - a function to give square root for num
 * @n: given input num
 * Return: if less zero returns -1, otherwise return square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (check_pow(n, 2));
}
/**
 * check_pow - a function checking if a natural number
 * @n: given num
 * @cons: constant iteration
 * Return: if not natural return -1, otherwise return square root
*/
int check_pow(int n, int cons)
{
	if (cons % (n / cons) == 0)
	{
		if (cons * (n / cons) == n)
			return (cons);
		else
			return (-1);
	}
	return (0 + check_pow(n, cons + 1));
}
