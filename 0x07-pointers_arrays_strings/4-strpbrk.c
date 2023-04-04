#include "main.h"
/**
 * *_strpbrk- converts a string to an integer
 * @s: string to be converted
 * @accept: jfjffkkfk
 * Return: the int converted from the string
 */

char *_strpbrk(char *s, char *accept)
{
char *p1, *p2;
for (p1 = s; *p1 != '\0'; ++p1)
{
for (p2 = accept; *p2 != '\0'; ++p2)
{
if (*p1 == *p2)
return (p1);
}
}
return (0);
}
