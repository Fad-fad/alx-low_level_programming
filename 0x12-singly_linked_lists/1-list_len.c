#include <stdio.h>
#include "lists.h"
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
/**
 * list_len - impr'u lste chaînée
 * @h: pointeur vers leier élément de la liste
 * Return: le nombre de nœuds dans la liste
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
while ((h -> next) != NULL)
{
count++;
h = h -> next;
}
return (count);
}
