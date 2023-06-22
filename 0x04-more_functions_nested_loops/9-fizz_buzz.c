#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Sucess)
*/
int main(void)
{
	int target;

		target = 1;
	printf("%d", target);
	for (target = 2; target <= 100; target++)
	{
		if ((target % 3 == 0) && (target % 5 == 0))
			printf(" FizzBuzz");
		else if (target % 3 == 0)
			printf(" Fizz");
		else if (target % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", target);
	}
	printf("\n");
	return (0);
}
