#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: pointer to a 2 dimensional grid of integers
 * @height: height of the grid
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
    void *p = malloc(b);

    if (p == NULL)
    {
        exit(98);
    }

    return (p);
}

