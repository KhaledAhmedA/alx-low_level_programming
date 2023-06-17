#include <stdio.h>
/**
 * main - Entry point
 * print lowercase alphabet
 * Return: Always 0 (Sucess)
 */
/* betty style doc for function main goes there */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
