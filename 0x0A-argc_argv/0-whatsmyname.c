#include <stdio.h>
/**
 * main - Entry point to return name of program ./name
 * @argc: first argument it's count of values length
 * @argv: array of values started by program name
 * Return: Always 0 (Sucess)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
