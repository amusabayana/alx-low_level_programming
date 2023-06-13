#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees alloc_grid
 * @grid: grid
 * @height: height of grid
 * Description: frees up memory
 * Return: nothing to return
 *
 */

void free_grid(int **grid, int height)
{
int y;
for (y = 0; y < 0; y++)
{
free(grid[y]);
}
free(grid);
}
