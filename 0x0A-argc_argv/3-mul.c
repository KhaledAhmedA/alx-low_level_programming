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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[i]) * atoi(argv[2]));
	return (0);
}
