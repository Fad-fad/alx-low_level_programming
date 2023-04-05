#include "main.h"

/**
 * _pow_recursion - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @x: 2D array
 * @y: integer
 * Return: nothing
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
while (y != 0)
{
return (x * _pow_recursion(x, y - 1));
}
if (y == 0)
return (1);
}
