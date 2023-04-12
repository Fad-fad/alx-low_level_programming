#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional integer grid
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: pointer to 2 dimensional integer grid, NULL on failure or invalid
 * dimensions
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
if (width <= 0 || height <= 0)
return (0);
grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (0);
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (0);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
