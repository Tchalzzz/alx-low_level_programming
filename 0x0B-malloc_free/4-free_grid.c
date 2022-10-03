#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory grid and returns unused blocks
 * into the memoery heap
 * @height: integer
 * @grid: gird of memories
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);

	free(grid);
}
