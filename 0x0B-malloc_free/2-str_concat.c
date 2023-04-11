#include "main.h"
#include <stdlib.h>
/**
 * *str_concat- converts a string to an integer
 * @s1: string to be converted
 * @s2: jfjffkkfk
 * Return: the int converted from the string
 */
char *str_concat(char *s1, char *s2)
{
char *tab;
int i;
int j;
int k;
int q;
for (i = 0; s1[i] != '\0'; i++)
{}
for (j = 0; s2[j] != '\0'; j++)
{}

tab = malloc(i + j + 1);
if (tab == NULL)
return (tab);
else
{
q = 0;
for (k = 0; k < i; k++)
{tab[k] = s1[q];
q++;
}
q = 0;
for (k = i; k < i + j; k++)
{
tab[k] = s2[q];
q++;
}
tab[i + j] = '\0';
}
return (tab);
}
