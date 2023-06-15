#include <unistd.h>
/**
 * main - Entry point
 * print string without using printf or puts
 * Return: always 1 (Failure)
 */
int main(void)
{
	char varS[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, varS, 59);
	return (1);
}
