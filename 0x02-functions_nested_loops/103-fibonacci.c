#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Sucess)
*/
int main(void)
{
	long int total, num1, num2, box;

	num1 = 0;
	num2 = 1;

	while (1)
	{
		box = num1 + num2;
		if (box > 4000000)
			break;
		if ((box % 2) == 0)
			total += box;
		num1 = num2;
		num2 = box;
	}
	printf("%ld\n", total);
	return (0);
}
