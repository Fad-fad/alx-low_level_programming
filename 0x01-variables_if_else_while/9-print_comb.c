#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Function of hhsdhj
 * Return: 0 (Success)
 */
int main(void)
{int i;
for (i = 0; i <= 9; i++)
{putchar(i + '0');
if (i == 9)
break;
putchar(',');
putchar(' '); }
putchar('\n');
return (0); }
