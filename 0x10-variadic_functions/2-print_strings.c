#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_strings- rrjrjrj
 *@n: uns
 *@separator: jfjjjfjjf
 *Return: jjfjfjfjf 0 jfjfj
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
char *str;
unsigned int i;
va_start(args, n);
if (separator == NULL)
separator = "";
for (i = 0; i < n; i++)
{
str = va_arg(args, char*);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (i == n - 1)
break;
printf("%s", separator);
}
printf("\n");
va_end(args);
}

