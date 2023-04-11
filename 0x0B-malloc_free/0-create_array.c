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
tab = malloc(size);
if (tab == NULL)
{
return (tab);
}
else
{
for (i = 0; i < size; i++)
{
tab[i] = c;
}
}
return (tab);
}
