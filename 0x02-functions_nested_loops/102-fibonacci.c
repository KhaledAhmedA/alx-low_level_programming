#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Sucess)
*/
int main(void)
{
	int dist;
	long int num1, num2, box;

	num1 = 1;
	num2 = 2;

	for (dist = 0; dist < 50; dist++)
	{
		box = num1 + num2;
		printf("%ld", box);

		num1 = num2;
		num2 = box;

		if (dist == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
