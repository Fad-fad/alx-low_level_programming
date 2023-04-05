#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: 2D array
 * @size: size x size of the square matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
int i;
int j;
int d = 0;
int di= 0;
for (i = 0; i < size; i++)
{
d += a[i][i];
}
j = size - 1;
for (i = 0; i < size; i++)
{
di += a[j][i];
j--;
}
printf("%d, %d\n", d, di);
}
