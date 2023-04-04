#include "main.h"
/**
 * *_strchr- converts a string to an integer
 * @s: string to be converted
 * @c: jfjffkkfk
 * Return: the int converted from the string
 */

char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
