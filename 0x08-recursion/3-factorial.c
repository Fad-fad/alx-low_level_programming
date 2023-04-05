#include "main.h"

/**
 * factorial - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @n: 2D array
 * Return: nothing
 */

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0 || n == 1)
return (1);
else
return (n * factorial(n - 1));
}
