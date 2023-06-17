#include <stdio.h>
/**
 * main - Entry point
 * print all base16 by putchar
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (n = 97; n < 103; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
