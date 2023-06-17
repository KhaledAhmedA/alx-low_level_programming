#include <stdio.h>
/**
 * main - Entry point
 * print lower alphabet but q and e
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char initial = 'a';

	while (initial == 'q' || initial == 'e')
	{
		initial++;
		putchar(initial);
		initial++;
	}
	putchar('\n');
	return (0);
}
