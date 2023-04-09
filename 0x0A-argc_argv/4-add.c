#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -program
 * @argc: An argcounter
 * @argv: An argvalues
 * Return: fjfjfjfj 0 djjd
 */
int main(int argc, char *argv[])
{
int i;
int res = 0;
int j;
if (argc == 0)
printf("%d\n", res);
else
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
if (atoi(argv[i]) > 0)
res += atoi(argv[i]);
}
printf("%d\n", res);
}
return (0);
}
