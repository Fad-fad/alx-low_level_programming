/**
 * print_rev-check the code
 * @s: var to print
 *
 * Return: Always 0.
 */
#include "main.h"
void print_rev(char *s)
{
int i;
int j;
for (i = 0; s[i] != '\0';
i++)
;
for (j = i - 1; j >= 0;
j--)
_putchar(s[i]);
_putchar('\n');
}
