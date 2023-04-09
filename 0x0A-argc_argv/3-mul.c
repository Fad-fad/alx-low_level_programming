#include <stdio.h>
#include <stdlib.h>
/**
 * main -program
 * @argc: An argcounter
 * @argv: An argvalues
 * Return: fjfjfjfj 0 djjd
 */
int main(int argc, char *argv[])
{
int res;
if (argc != 3)
printf("Error\n");
else
{
res = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", res);
}
return (0);
}
