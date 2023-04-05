#include "main.h"

/**
 * _strlen_recursion - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @s: 2D array
 * Return: nothing
 */

int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
else
return (0);
}
