#include "main.h"
/**
 * *_strstr- converts a string to an integer
 * @haystack: string to be converted
 * @needle: jfjffkkfk
 * Return: the int converted from the string
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (needle[j] == '\0')
return (&haystack[i]);
}
return (0);
}

