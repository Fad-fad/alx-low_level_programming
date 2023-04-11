#include "main.h"
#include <stdlib.h>
/**
 * *create_array- converts a string to an integer
 * @size: string to be converted
 * @c: jfjffkkfk
 * Return: the int converted from the string
 */

char *create_array(unsigned int size, char c)
{
char *tab;
unsigned int i;
if (size  == 0)
{
return (0);
}
tab = malloc(size + 1);
for (i = 0; i < size; i++)
{
tab[i] = c;
}
tab[i] = '\0';
return (tab);
}
