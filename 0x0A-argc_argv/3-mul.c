#include <stdio.h>
#include <stdlib.h>

/**
 * main - function print mul of two argu after prog name
 * @argc: num of arguments
 * @argv: array of values of arguments
 * Return: 0 (Sucess)
*/
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
