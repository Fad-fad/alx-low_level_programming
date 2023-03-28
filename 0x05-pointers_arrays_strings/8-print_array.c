/**
 * print_array-check the cod
 * @a: var in 98
 * @n: variable
 *
 * Return: Always 0.
 */
#include <stdio.h>
void print_array(int *a, int n)
{
int j;
for (j = 0; j < n; j++)
{
printf("%d", a[j]);
if (j != (n - 1))
printf(", ");
}
printf("\n");
}
