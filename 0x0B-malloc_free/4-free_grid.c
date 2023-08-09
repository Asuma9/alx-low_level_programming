#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * free_grid - free a 2d grid previously created for alloc-grid
 * @grid: previous grid
 * @height: height
 * Return: NULL (failure)
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL)
	{
		int i;

		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
