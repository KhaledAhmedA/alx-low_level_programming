#include "function_pointers.h"

/**
 * main - function will check the code
 * @argc: num of arguments
 * @argv: arr of values of arguments
 * Return: Always 0 (Sucess)
*/

int main(int argc, char *argv[])
{
	char *p = (char *main);
	int c;

	if (argc != 2)
		printf("Error\n"), exit(1);

	c = atoi(argv[1]);
	if (c < 0)
		printf("Error\n"), exit(2);

	while (c--)
		printf("%02hhx%s", *p++, c ? " " : "\n");

	return (0);
}
