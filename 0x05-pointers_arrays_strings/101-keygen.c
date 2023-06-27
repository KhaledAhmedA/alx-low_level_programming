#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int rnum = 0, calc = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (calc < 2772)
	{
		r = rand() % 128;
		if ((calc + rnum) > 2772)
			break;
		calc = calc + rnum;
		printf("%c", rnum);
	}
	printf("%c\n", (2772 - calc));
	return (0);
}
