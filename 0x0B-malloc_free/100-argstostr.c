#include "main.h"
/**
 * argstostr - function return arguments into string
 * @ac: argmuent length
 * @av: argu values
 * Return: string or NULL
*/

char *argstostr(int ac, char **av)
{
	int i, j, counter1, counter2;
	char *arrc;

	if (ac == 0)
		return (NULL);

	for (counter1 = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			counter1++;
		counter1++;
	}

	arrc = malloc((counter1 + 1) * sizeof(char));
	if (arrc == NULL)
	{
		free(arrc);
		return (NULL);
	}

	for (i = j = counter2 = 0; counter2 < counter1; j++, counter2++)
	{
		if (av[i][j] == '\0')
		{
			arrc[counter2] = '\n';
			i++;
			counter2++;
			j = 0;
		}
		if (counter2 < counter1 - 1)
			arrc[counter2] = av[i][j];
	}
	arrc[counter2] = '\0';
	return (arrc);
}
