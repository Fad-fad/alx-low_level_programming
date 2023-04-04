#include "main.h"
/**
 * *_strpbrk- converts a string to an integer
 * @s: string to be converted
 * @accept: jfjffkkfk
 * Return: the int converted from the string
 */

char *_strpbrk(char *s, char *accept)
{
int i;
int j;
int bol;
for (i = 0; s[i] != '\0'; i++)
{
bol = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
bol = 1;
break;
}
}
if (!bol)
s++;
else
return (s + 1);
}
return (0);
}
