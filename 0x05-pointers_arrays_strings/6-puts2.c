/**
 * puts2- check the codefff
 *
 * @str: var i
 *
 * Return: Always 0.
 */
#include "main.h"
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0';
i += 2)
{
_putchar(str[i]);
}
}
