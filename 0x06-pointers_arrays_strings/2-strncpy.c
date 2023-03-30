#include "main.h"
/**
 * *_strncpy- converts a string to an integer
 * @dest: string to be converted
 * @src: jfjffkkfk
 * @n: intg
 * Return: the int converted from the string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
int j;
for (j = 0;
src[j] != '\0' && j < n; j++)
{
dest[j] = src[j];
i++;
}
while (j < n)
{ dest[j] = '\0';
j++;
}
return (dest);
}
