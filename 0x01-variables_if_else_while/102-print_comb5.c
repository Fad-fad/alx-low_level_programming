#include <stdio.h>
#include <stdbool.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, z, h;
bool is_first_iteration = true;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
for (z = i; z < 10; z++)
{
for (h = 0; h < 10; h++)
{
if (i == z && h <= j)
{
continue;
}
if (is_first_iteration == false)
{
putchar(',');
putchar(' '); }
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(z + '0');
putchar(h + '0');
is_first_iteration = false; }}}}
putchar('\n');
return (0); }
