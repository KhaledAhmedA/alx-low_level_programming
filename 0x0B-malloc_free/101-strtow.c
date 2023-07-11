#include "main.h"
int s_length(char *str);
/**
 * strtow - function splits strings to words
 * @str: given string
 * Return: array of chars contain seperated words from string or NULL
*/

char **strtow(char *str)
{
	int i, j, k, l, n = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);

	n = s_length(str);
	if (n == 1)
		return (NULL);

	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);

	w[n - 1] = NULL;
	i = 0;

	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;

			j++;
			w[wc] = (char *)malloc(j * sizeof(char));
			j--;

			if (w[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(w[k]);

				free(w[n - 1]);
				free(w);
				return (NULL);
			}

			for (l = 0; l < j; l++)
				w[wc][l] = str[i + l];

			w[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (w);
}

/**
 * s_length - function return length of given string
 * @str: given string
 * Return: length of given string
*/
int s_length(char *str)
{
	int i, size;

	size = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				size++;
		}
		else if (i == 0)
			size++;
	}
	size++;
	return (size);
}
