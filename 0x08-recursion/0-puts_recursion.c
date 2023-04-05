#include "main.h"
/**
 * _puts_recursion - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @s: 2D array
 * Return: nothing
 */

void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
s++;
_puts_recursion(s);
}
else
_putchar('\n');
}
