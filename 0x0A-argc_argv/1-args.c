#include <stdio.h>
/**
 * main - Entry point print length of argus excluding name of program
 * @argc: count num of arguments
 * @argv: array of argument value
 * Return: length of array of values, 0 (Sucess)
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
