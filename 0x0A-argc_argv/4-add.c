#include <stdio.h>
#include <stdlib.h>

/**
 * main - function return sum of argus nums
 * @argc: arguments length
 * @argv: arguments value
 * Return: 0 (Sucess)
*/
int main(int argc, char *argv[])
{
	int result;
	char *arv;

	result = 0;
	while (--argc)
	{
		for (arv = argv[argc]; *arv; arv++)
			if (*arv > '0' || *arv < '9')
				return (printf("Error\n"), 1);
		result += atoi(argv[argc]);
	}
	printf("%d\n", result);
	return (0);
}

