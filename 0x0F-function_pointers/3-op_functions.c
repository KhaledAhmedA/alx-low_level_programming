#include "3-calc.h"

/**
 * op_add - sum two nums
 * @a: first number
 * @b: second number
 * Return: sum of two nums
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subctracts two nums
 * @a: first number
 * @b: second number
 * Return: substracts of nums
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two nums
 * @a: first number
 * @b: second number
 * Return: multiply two num
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division two nums
 * @a: first number
 * @b: second number
 * Return: result of div two nums
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calc modules
 * @a: first number
 * @b: second number
 * Return: result of remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
