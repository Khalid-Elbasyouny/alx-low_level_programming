#include "main.h"


/**
 * free_grid - function that function that frees a 2 dimensional grid
 *
 * @grid: 2 Dim grid
 * @height: int for height
 *
 * Return: void
 *
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}

