#include "main.h"
/**
 * *_strspn- converts a string to an integer
 * @s: string to be converted
 * @accept: jfjffkkfk
 * Return: the int converted from the string
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j;
int TORF;
unsigned int compt = 0;
for (i = 0; s[i] != '\0'; i++)
{
TORF = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
TORF = 1;
break;
}
}
if (TORF)
compt++;
else
break;
}
return (compt);
}
