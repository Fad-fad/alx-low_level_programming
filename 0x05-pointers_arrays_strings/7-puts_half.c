/**
 * puts_half-check the cod
 * @str: var in 98
 *
 * Return: Always 0.
 */
#include "main.h"
void puts_half(char *str)
{
int i;
int j;
for (j = 0; str[j] != '\0';
j++)
{}
if (j % 2 == 0)
{
for (i = j / 2 - 1; i < j;
i++)
_putchar(str[i]);
}
else
{
for (i = (j - 1) / 2 - 1; i < j;
i++)
_putchar(str[i]);
}
_putchar('\n');
}
