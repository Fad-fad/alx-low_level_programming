#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - creates a 2 dimensional integer grid
 * @s1: the width of the grid
 * @s2: the height of the grid
 * @n: unsigned
 * Return: point
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2;
char *concat;
if (!s1)
s1 = "";
if (!s2)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
if (n > len2)
n = len2;
concat = malloc(len1 + n + 1);
if (!concat)
return (NULL);
memcpy(concat, s1, len1);
memcpy(concat + len1, s2, n);
concat[len1 + n] = '\0';
return (concat);
}
