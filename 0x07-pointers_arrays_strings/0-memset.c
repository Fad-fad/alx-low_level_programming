#include "main.h"
/**
 * *_memset- converts a string to an integer
 * @s: string to be converted
 * @b: jfjffkkfk
 * @n: intg
 * Return: the int converted from the string
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
