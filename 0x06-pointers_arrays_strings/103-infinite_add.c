#include "main.h"
/**
 * infinite_add - a function add two numbers
 * @n1: num1
 * @n2: num2
 * @r: store result
 * @size_r: size of result
 * Return: destnation
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, si, di, k1, k2, zero = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	if (i >= j)
		di = i;
	else
		di = j;
	if (size_r <= di + 1)
		return (0);
	r[di + 1] = '\0';
	i--, j--, size_r--;
	k1 = *(n1 + i) - 48, k2 = *(n2 + j) - 48;
	while (di >= 0)
	{
		si = k1 + k2 + zero;
		if (si >= 10)
			zero = si / 10;
		else
			zero = 0;
		if (si > 0)
		*(r + di) = (si % 10) + 48;
		else
			*(r + di) = '0';
		if (i > 0)
			i--, k1 = *(n1 + i) - 48;
		else
			k1 = 0;
		if (j > 0)
			j--, k2 = *(n2 + j) - 48;
		else
			k2 = 0;
		di--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
