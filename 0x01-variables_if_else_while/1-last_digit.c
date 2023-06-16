#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 * function to return kind of num if neg or pos or zero
 * Return: always 0 (Sucess)
*/
/* betty style doc for function main goes there */
int main(void)
{
        int n,ln;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
	ln = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and greater than 5\n", n, ln);
	else if (n < 6)
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, ln);
	else
		printf("Last digit of %d is %d and is 0\n", n, ln);
}
