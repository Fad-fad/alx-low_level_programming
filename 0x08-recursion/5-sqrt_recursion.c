#include "main.h"

/**
 * _sqrt_recursion - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @n: 2D array
 * Return: nothing
 */

int _sqrt_recursion(int n)
{
if (n < 0) {
return -1;
} else if (n == 0 || n == 1) {
return n;
} else {
return _sqrt_helper(n, 1, n);
}
}

int _sqrt_helper(int n, int start, int end)
{
if (end < start) {
return -1;
}

int mid = (start + end) / 2;

if (mid * mid == n) {
return mid;
} else if (mid * mid > n) {
return _sqrt_helper(n, start, mid - 1);
} else {
return _sqrt_helper(n, mid + 1, end);
}
}

