#include <stdio.h>
/**
 * main - function print mul of two argu after prog name
 * @argc: num of arguments
 * @argv: array of values of arguments
 * Return: 0 (Sucess)
*/
int main(int argc, char *argv[])
{
	int result = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[i]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
