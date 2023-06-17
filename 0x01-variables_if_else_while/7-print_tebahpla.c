#include <stdio.h>
/**
 * main - Entry point
 * print alphabets reversed by pucher
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;

	for (n = 122; n > 96; n--)
		putchar(n);

	putchar('\n');
	return (0);
}
