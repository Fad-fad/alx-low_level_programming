#include "main.h"
#include <stdlib.h>
/**
 * *_strncpy- converts a string to an integer
 * @dest: string to be converted
 * @src: jfjffkkfk
 * @n: intg
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
tab = malloc(size);
for (i = 0; i < size; i++)
{
tab[i] = c;
}
return(tab);
}
