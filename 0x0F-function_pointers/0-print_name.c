#include "function_pointers.h"
#include "stddef.h"
/**
 * print_name- rjjnfnf
 * @name: hndjejk
 * @f: jjjjd
 * return: fjjf 0 jj
*/
void print_name(char *name, void (*f)(char *))
{
if (name == 0 || f == 0)
return;
f(name);
}
