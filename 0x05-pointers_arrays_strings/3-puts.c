/**
 * _puts-check the code
 * @str: var in 98
 *
 * Return: Always 0.
 */
#include "main.h"
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0';
i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
