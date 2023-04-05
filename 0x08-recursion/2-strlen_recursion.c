#include "main.h"

/**
 * _strlen_recursion - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @s: 2D array
 * Return: nothing
 */

int _strlen_recursion(char *s)
{
int i = 0;
if (*s != '\0')
{
i++;
s++;
_strlen_recursion(s);
}
else
return (i);
}
