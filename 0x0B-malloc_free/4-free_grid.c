#include <stdlib.h>
/**
 * free_grid - frees 2-dimensional grid
 * @grid: array
 * @height: height of the array
 * Return: 0
 */
void free_grid(int **grid, int height)
{
int a;
for (a = 0; a < height; a++)
free(grid[a]);
free(grid);
}
