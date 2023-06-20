#include <stdio.h>
/**
 * main - Entry point
 * print _putchar
 * Return: Always 0 (Sucess)
*/
int main(void)
{
	char arrChar[] = ("_putchar");
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(arrChar[ch]);

	return (0);

}
