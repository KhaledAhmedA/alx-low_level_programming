#include "main.h"
/**
 * alloc_grid - function return 2d array of integer
 * @width: width dimention
 * @height: height dimention
 * Return: array of intgers or NULL
*/

int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	prt = (int *)malloc(sizeof(*ptr) * height);

	if (ptr == 0 || height <= 0 || width <= 0)
		return (NULL);

	else
	{
		for (i = 0; i < height; i++)
		{
			ptr[i] = (int *)malloc(sizeof(**ptr) * width);

			if (ptr[i] == 0)
			{
				while (i--)
					free(ptr[i]);

				free(ptr);
				return (NULL);
			}

			for (j = 0; j < width; j++)
				ptr[i][j] = 0;
		}
	}

	return (ptr);
}
