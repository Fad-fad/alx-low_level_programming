#include "main.h"

/**
 * _print_rev_recursion - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @s: 2D array
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;
_print_rev_recursion(s + 1);
_putchar(*s);
}

