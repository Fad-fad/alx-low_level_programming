#include <stdlib.h>

/**
 * *malloc_checked - frees a 2 dimension
 * @b: pointer to a 2 dimensional grid of integers
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

