#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Function of hhsdhj
 * Return: 0 (Success)
 */
int main(void)
{int i;
int j;
int k;
for (i = 0; i <= 7; i++)
{
for (j = 1; j <= 8; j++)
{
for (k = 2; k <= 9; k++)
{
if (i >= j && j >= k)
continue;
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i == 7 && j == 8 && k == 9)
break;
putchar(',');
putchar(' '); }}}
putchar('\n');
return (0); }
