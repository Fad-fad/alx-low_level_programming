#include "main.h"

/**
 * check - checks to see if number is prime
 * @n:int
 * @a:int
 * Return:int
 */
int check(int n, int a)
{
{
if (n % a == 0)
return (0);
else if (a != (n/2))
check (n, a+1);
else
return(1);
}
/**
 * is_prime_number - states if number is prime
 * @n:number to evaluate
 * Return:int
 */

int is_prime_number(int n)
{
if (n == 1 || n == 2)
return (1);
else
check (n, 2);
}
