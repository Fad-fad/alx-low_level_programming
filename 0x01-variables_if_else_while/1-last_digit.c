#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints the sign of integers
 * Return: Alwiays 0 (Success)
 */
int main(void)
{int n;
int u;
srand(time(0));
n = rand() - RAND_MAX / 2;
u = n % 10;
if (u > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
if (u < 6  && u != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
if (u == 0)
printf("Last digit of %d is %d and is 0\n", n, n % 10);
return (0); }
