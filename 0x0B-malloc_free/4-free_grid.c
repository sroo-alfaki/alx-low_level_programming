#include "main.h"

/**
 * **alloc_grid - function that frees a 2 dimensional grid
 * @grid: grid
 * @height: value
 * Return: void
 */

int **alloc_grid(int width, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
