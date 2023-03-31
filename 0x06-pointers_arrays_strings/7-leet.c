#include "main.h"
/**
 * leet- converts a string to an integer
 * @str: string to be convert
 * Return: the int converted from the string
 */
char *leet(char *str)
{
int i;
int j;
char zalakiya[6] = "aeotl";
char amjad[6] = "AEOTL";
char fadwa[6] = "43071";

for (j = 0; str[j] != '\0'; j++)
{
for (i = 0; zalakiya[i] != '\0'; i++)
{
if (str[j] == zalakiya[i] || str[j] == amjad[i])
str[j] = fadwa[i];
}
}
return (str);
}

