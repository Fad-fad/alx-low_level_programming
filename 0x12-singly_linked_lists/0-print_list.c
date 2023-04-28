#include <stdio.h>
#include "lists.h"
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>

/**
 * print_list - impr'u lste chaînée
 * @z: pointeur vers leier élément de la liste
 *
 * Return: le nombre de nœuds dans la liste
 */
size_t print_list(const list_t *z)
{
size_t count = 0;
while (z != NULL)
{
if (z->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", z->len, z->str);
}
count++;
z = z->next;
}

return (count);
}
