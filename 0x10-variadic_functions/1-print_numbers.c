#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_numbers- rrjrjrj
 *@n: uns
 *@separator: jfjjjfjjf
 *Return: jjfjfjfjf 0 jfjfj
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
va_start(args, n);
int i;
if (separator == NULL)
separator = "";
for (i = 0; i < n; i++)
printf("%d%s", va_arg(arg, int), separator);
va_end(arg);
}
