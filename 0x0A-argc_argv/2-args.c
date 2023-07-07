#include <stdio.h>
/**
 * main - print all arguments including prog name
 * @argc: num of arguments
 * @argv: array of values
 * Return: print value followed by line, 0 (Sucess)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
