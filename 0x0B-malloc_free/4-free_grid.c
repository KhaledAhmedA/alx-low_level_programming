#include "main.h"

/**
 * free_grid - function free 2d arr
 * @grid: the grid arr
 * @height: arr height
 * Return: no return any value
*/

void free_grid(int **grid, int height)
{
	for (; height >= 0; height--)
		free(grid[height]);
	free(grid);
}
