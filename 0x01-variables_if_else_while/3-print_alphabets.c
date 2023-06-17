#include <stdio.h>
/**
 * main - Entry point
 * print alphabets lower then upper with putchar
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char lalpha = 'a';
	char ualpha = 'A';

	while (lalpha <= 'z')
	{
		putchar(lalpha);
		lalpha++;
	}

	while (ualpha <= 'Z')
	{
		putchar(ualpha);
		ualpha++;
	}
	putchar('\n');
	return (0);
}	
