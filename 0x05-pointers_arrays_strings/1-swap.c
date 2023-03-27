/**
 * swap_int-Swaps the values of two integers
 * @a: var to switch with b
 * @b: var to switch witch a
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
