#include "main.h"
#include <stdlib.h>
/**
 * *_strdup- converts a string to an integer
 * @str: string to be converte
 * Return: the int converted from the string
 */

char *_strdup(char *str)
{
char *tab;
int i;
int j;
if (str == NULL)
return (0);
for (i = 0; str[i] != '\0'; i++)
{}
tab = malloc(i);
if (tab == NULL)
return (0);
for (j = 0; j <= i; j++)
{
tab[j] = str[j];
}
return (tab);
}
