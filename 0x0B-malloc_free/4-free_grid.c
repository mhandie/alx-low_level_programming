#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - array
 * @grid: grid
 * @height: height
 * Description: memory
 * Return: 0
 *
 */
void free_grid(int **grid, int height)
{
int r;
for (r = 0; r < height; r++)
{
free(grid[r]);
}
free(grid);
}
