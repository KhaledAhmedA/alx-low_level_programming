#include <stdio.h>
/**
 * main - Entry point
 * print base 10 numbers by puchar
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	putchar('\n');
	return (0);
}
