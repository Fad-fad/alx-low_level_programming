#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum integer value to inc
 * @max: the maximum integer value to incl
 *
 * Return: If successful, returns a pointer
 * If min > max or if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
int i;
if (min > max)
return (0);
int *arr;
arr = malloc(sizeof(int) * (max - min + 1);
if (!arr)
return (0);
for (i = 0; i <= max - min; i++)
arr[i] = min + i;
return (arr);
}

