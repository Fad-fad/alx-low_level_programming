#include "main.h"
/**
 * *string_toupper- converts a string to an integer
 * @str: intg
 * Return: the int converted from the string
 */
char *string_toupper(char *str)
{
int i;
int j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 97; j <= 122; j++)
{
if (str[i] == j)
str[i] = 65 + (str[i] - 97);
}}
return (str);
}
