#include "main.h"
/**
 * *_memcpy- converts a string to an integer
 * @src: string to be converted
 * @dest: jfjffkkfk
 * @n: intg
 * Return: the int converted from the string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}

